---
title: 'Lab 11: RSA Encryption and Signature Lab'
localurl: './lab11_SEEDLab_Crypto_RSA.pdf'
seedurl: 'https://seedsecuritylabs.org/Labs_16.04/'
layout: default
tags: [labs, seed, cryptography, exploration]
published: True
---

## {{page.title}}
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

### Overview

RSA (Rivest-Shamir-Adleman) is one of the first public-key cryptosystems and is widely used for secure communication.
The RSA algorithm first generates two large random prime numbers,
 and then use them to generate public and private key pairs,
 which can be used to do encryption, decryption, digital signature generation, and digital signature verification.
The RSA algorithm is built upon number theories, and it can be quite easily implemented with the support of libraries.

The learning objective of this lab is for students to gain hands-on experience with the RSA algorithm.
From lectures, students should have learned the theoretic part of the RSA algorithm,
 so they know how to generate public and private keys and can conduct operations,
 such as encryption, decryption, signature generation, and signature verification.
This lab enhances student's learning by requiring students to conduct RSA operations on actual numbers,
and see whether they can perform the calculations correctly.
In this way, students are given a chance to apply the theory behind RSA that we learned in class.

This lab covers the following topics:
- Public-key cryptography
- The RSA algorithm and key generation
- Big number calculation
- Encryption and Decryption using RSA
- Digital signatures
- The X.509 certificate

###### Resources

- Chapter 23 in {{ site.data.settings.textbook }}
- The BIGNUM API: [https://linux.die.net/man/3/bn](https://linux.die.net/man/3/bn)

### Tasks
{:.titletext}
This lab has been tested on the pre-built [SEEDUbuntu16.04 VM](https://seedsecuritylabs.org/lab_env.html).
{:.subtitletext}
<!-- - The complete description of tasks for this lab can be found in the PDF write-up: **[{{page.title}}]({{page.localurl}})**. -->

<center class="mb-3 text-danger" markdown="span">
_To avoid mistakes, please avoid manually typing the numbers used in the lab tasks. <br/>
Instead, copy and paste the numbers from this page._
</center>

#### Setup

This lab requires the `openssl` library, which should already be installed on the Ubuntu 16.04.

If you find that the the `openssl` library is _**not**_ installed, please run the following two commands to install it:

```bash
$ sudo apt-get update
$ sudo apt-get install libssl-dev
```

#### Background

The RSA algorithm involves computations on large numbers.
These computations cannot be directly conducted using simple arithmetic operators in programs,
because those operators can only operate on primitive data types, such as 32-bit integer and 64-bit long integer types.
The numbers involved in the RSA algorithms are typically more than 512 bits long.
For example, to multiply two 32-bit integer numbers $$a$$ and $$b$$, we just need to use $$a*b$$ in our program.
However, if they are big numbers, we cannot do that any more;
instead, we need to use an algorithm to compute their products.

There are several libraries that can perform arithmetic operations on integers of arbitrary size.
In this lab, we will use the Big Number library provided by `openssl`.
To use this library, we will define each big number as a `BIGNUM` type,
and then use the APIs provided by the library for various operations,
such as addition, multiplication, exponentiation, modular operations, etc.

##### BIGNUM APIs
{:.mt-3}

All of the big number APIs can be found at [https://linux.die.net/man/3/bn](https://linux.die.net/man/3/bn).

Below, we summarize some of the APIs that are needed for this lab.

A `BN_CTX` structure is created to hold `BIGNUM` temporary variables and is used by library functions:

```bash
BN_CTX *ctx = BN_CTX_new()
```

Initialize a `BIGNUM` variable:

```bash
BIGNUM *a = BN_new()
```

There are a number of ways to assign a value to a `BIGNUM` variable:

```bash
// Assign a value from a decimal number string
BN_dec2bn(&a, "12345678901112231223");

// Assign a value from a hex number string
BN_hex2bn(&a, "2A3B4C55FF77889AED3F");

// Generate a random number of 128 bits
BN_rand(a, 128, 0, 0);

// Generate a random prime number of 128 bits
BN_generate_prime_ex(a, 128, 1, NULL, NULL, NULL);
```

Print out a big number:

```bash
void printBN(char *msg, BIGNUM * a)
{
  // Convert the BIGNUM to number string
  char * number_str = BN_bn2dec(a);

  // Print out the number string
  printf("%s %s\n", msg, number_str);

  // Free the dynamically allocated memory
  OPENSSL_free(number_str);
}
```

Compute $$res = a−b$$ and $$res = a+b$$:

```bash
BN_sub(res, a, b);
BN_add(res, a, b);
```

_Notice that a `BN_CTX` structure is needed in the following API calls._

Compute $$res = a ∗ b$$:  

```bash
BN_mul(res, a, b, ctx)
```

Compute $$res = a * b\ mod\ n$$:

```bash
BN_mod_mul(res, a, b, n, ctx)
```

Compute $$res = a^c\ mod\ n$$:

```bash
BN_mod_exp(res, a, c, n, ctx)
```

Compute modular inverse, i.e., given $$a$$, find $$b$$, such that $$a*b\ mod\ n = 1$$.
The value $$b$$ is called the inverse of $$a$$, with respect to modular $$n$$.

```bash
BN_mod_inverse(b, a, n, ctx);
```

##### A Complete Example
{:.mt-3}

Here, we show a complete example.
In this example, we initialize three `BIGNUM` variables,
$$a$$, $$b$$, and $$n$$;
we then compute $$a * b$$ and $$(a^b mod\ n)$$.

```bash
// bn_sample.c

// To compile this example program, run:
//    $ gcc bn_sample.c -lcrypto

#include <stdio.h>
#include <openssl/bn.h>
#define NBITS 256

void printBN(char *msg, BIGNUM * a)
{
  // Use BN_bn2hex(a) for hex string
  // Use BN_bn2dec(a) for decimal string
  char * number_str = BN_bn2hex(a);
  printf("%s %s\n", msg, number_str);
  OPENSSL_free(number_str);
}

int main ()
{
  BN_CTX *ctx = BN_CTX_new();
  BIGNUM *a = BN_new();
  BIGNUM *b = BN_new();
  BIGNUM *n = BN_new();
  BIGNUM *res = BN_new();

  // Initialize a, b, n
  BN_generate_prime_ex(a, NBITS, 1, NULL, NULL, NULL);
  BN_dec2bn(&b, "273489463796838501848592769467194369268");
  BN_rand(n, NBITS, 0, 0);

  // res = a*b
  BN_mul(res, a, b, ctx);
  printBN("a * b = ", res);

  // res = aˆb mod n
  BN_mod_exp(res, a, b, n, ctx);
  printBN("aˆc mod n = ", res);

  return 0;
}
```

#### Task 1: Deriving the Private Key
Let $$p$$, $$q$$, and $$e$$ be three prime numbers.
Let $$n = p*q$$.
We will use $$(e, n)$$ as the public key.
Using the big number APIs, please calculate the private key $$d$$.

The hexadecimal values of $$p$$, $$q$$, and $$e$$ are listed below.

```bash
p = F7E75FDC469067FFDC4E847C51F452DF
q = E85CED54AF57E53E092113E62F436F4F
e = 0D88C3
```
**Hint:** Euler's formula is useful here ;)

_**NOTE:** It should be noted that although $$p$$ and $$q$$ used in this task are quite large numbers,
they are not large enough to be secure.
We intentionally make them small for the sake of simplicity.
In practice, these numbers should be at least 512 bits long (the ones used here are only 128 bits)._

#### Task 2: Encrypting a Message
Let $$(e, n)$$ be the public key.
Please encrypt the message $$m$$ provided below.
After you encrypt the message, you should decrypt it (we provide you with the private key, $$d$$) to verify that you can recover the message.

_**Note:**_ We first need to convert this ASCII string to a hex string, and then convert the hex string to a `BIGNUM` using the hex-to-bn API `BN_hex2bn()`.
You can use whatever utility is easiest for you to do this conversion (e.g., `xxd`, `python`).
For reference, I recommend the following python commands that can be used to convert a plain ASCII string to a hex string and vice versa.

```python
# convert ASCII to hex-encoded string
$ python -c 'print("A top secret!".encode("hex"))'
4120746f702073656372657421

# convert hex-encoded string ("decode") to ASCII
$ python -c 'print("4120746f702073656372657421".decode("hex"))'
A top secret!
```

The public key values are listed below (in hexadecimal).
We also provide the private key $$d$$ to help you verify your encryption result.

```python
m = A top secret!
e = 010001 (this hex value equals to decimal 65537)
n = DCBFFE3E51F62E09CE7032E2677A78946A849DC4CDDE3A4D0CB81629242FB1A5
d = 74D806F9F3A62BAE331FFE3F0A68AFE35B3D2E4794148AACBC26AA381CD7D30D
```

#### Task 3: Decrypting a Message
The public/private keys used in this task are the same as the ones used in Task 2.

Please decrypt the following ciphertext $$C$$, and convert it back to a plain ASCII string.

```bash
C = 8C0F971DF2F3672B28811407E2DABBE1DA0FEBBBDFC7DCB67396567EA1E2493F
```

#### Task 4: Signing a Message
The public/private keys used in this task are the same as the ones used in Task 2.

Please generate a signature for the following message $$M$$
(please directly sign this message, instead of signing its hash value):

```bash
M = I owe you $2000.
```

Please make a slight change to the message $$M$$, such as changing $2000 to $3000, and sign the modified message.

Compare both signatures and describe what you observe.

#### Task 5: Verifying a Signature

Bob receives a message **$$M$$ = "Launch a missile."** from Alice, with her signature $$S$$.
We know that Alice's public key is $$(e, n)$$.

Please verify whether the signature is indeed Alice's or not.

The public key and signature (hexadecimal) are as follows:

```bash
M = Launch a missile.
S = 643D6F34902D9C7EC90CB0B2BCA36C47FA37165C0005CAB026C0542CBDB6802F
e = 010001 (this hex value equals to decimal 65537)
n = AE1CD4DC432798D933779FBD46C6E1247F0CF1233595113AA51B450F18116115
```

Suppose that the signature is corrupted, such that the last byte of the signature changes from **2F** to **3F**,
i.e, only one bit is changed.
Please repeat this task, and describe what will happen during the verification process.

#### Task 6 (Extra Credit): Manually Verifying an X.509 Certificate
In this task, we will manually verify an X.509 certificate using a program that you write.
An X.509 certificate contains data about a public key and an issuer's signature over the data.
We will download a real X.509 certificate from a web server,
get its issuer's public key (certificates for Certificate Authorities can be downloaded from your browser),
and then use this public key to verify the signature on the certificate you downloaded.

##### Step 1: Download a certificate from a real web server
We use the `www.example.org` server in this document.
Students should choose a different web server (e.g., `www.montana.edu`, `www.google.com`)
that has a different certificate than the one used in this document.
_(In the case of the examples shown here, note that `www.example.com` shares the same certificate with `www.example.org`)._

We can download certificates using a browser (Google it!) or use the following command:

```bash
$ openssl s_client -connect www.example.org:443 -showcerts

Certificate chain
  0 s:/C=US/ST=California/L=Los Angeles/O=Internet Corporation for Assigned Names and Numbers/OU=Technology/CN=www.example.org
    i:/C=US/O=DigiCert Inc/OU=www.digicert.com/CN=DigiCert SHA2 High Assurance Server CA
-----BEGIN CERTIFICATE-----
...snip...
-----END CERTIFICATE-----
  1 s:/C=US/O=DigiCert Inc/OU=www.digicert.com/CN=DigiCert SHA2 High Assurance Server CA
    i:/C=US/O=DigiCert Inc/OU=www.digicert.com/CN=DigiCert High Assurance EV Root CA
-----BEGIN CERTIFICATE-----
...snip...
-----END CERTIFICATE-----
```

Assume, for example, that the result of the command contains two certificates.
The subject field (the entry starting with `s:`) of the certificate is `www.example.org`, i.e., this is `www.example.org`'s certificate.
The issuer field (the entry starting with `i:`) provides the issuer's information.
The subject field of the second certificate is the same as the issuer field of the first certificate.
Basically, the second certificate belongs to an intermediate CA.
In this task, we will use the CA's certificate to verify a server certificate.

If you only get one certificate back using the above command, that means the certificate you get is signed by a root CA.
Root CAs' certificates can be obtained from the Firefox browser installed in our SEED VM.
Go to Edit &rarr; Preferences &rarr; Privacy and then Security &rarr; View Certificates.
Search for the name of the issuer and download its certificate.

Copy and paste each of the certificates
_(the text between the line containing `"Begin CERTIFICATE"` and the line containing `"END CERTIFICATE"`, including these two lines)_ to a file.
Let us call the first one `c0.pem` and the second one `c1.pem`.

##### Step 2: Extract the public key $$(e, n)$$ from the issuer's certificate
The `openssl` program provides commands to extract certain attributes from X.509 certificates.
We can extract the value of $$n$$ using the `-modulus` flag.
There is no specific command to extract $$e$$, but we can print out all the fields and can easily find the value of $$e$$.

```bash
# For modulus (n):
$ openssl x509 -in c1.pem -noout -modulus

# Print out all the fields, find the exponent (e):
$ openssl x509 -in c1.pem -text -noout
```

##### Step 3: Extract the signature from the server’s certificate
There is no specific `openssl` command to extract the signature field.
However, we can print out all the fields and then copy and paste the signature block into a file
_(**NOTE:** if the signature algorithm used in the certificate is not based on RSA, you should find another certificate)._

```bash
$ openssl x509 -in c0.pem -text -noout
...
Signature Algorithm: sha256WithRSAEncryption
  84:a8:9a:11:a7:d8:bd:0b:26:7e:52:24:7b:b2:55:9d:ea:30:
  89:51:08:87:6f:a9:ed:10:ea:5b:3e:0b:c7:2d:47:04:4e:dd:
  ......
  5c:04:55:64:ce:9d:b3:65:fd:f6:8f:5e:99:39:21:15:e2:71:
  aa:6a:88:82
```

We need to remove the spaces and colons from the data so that we can get a hex-string that we can feed into our program.
The following commands can help us to achieve this goal.
The `tr` command is a Linux utility tool for string operations.
In this case, the `-d` option is used to delete ":" and "space" characters from the data.

```bash
$ cat signature | tr -d '[:space:]:'
84a89a11a7d8bd0b267e52247bb2559dea30895108876fa9ed10ea5b3e0bc7
......
5c045564ce9db365fdf68f5e99392115e271aa6a8882
```

##### Step 4: Extract the body of the server’s certificate
A Certificate Authority (CA) generates the signature for a server certificate by first computing the hash of the certificate, and then signing the hash.
To verify the signature, we also need to generate the hash from a certificate.
Since the hash is generated before the signature is computed, we need to exclude the signature block of a certificate when computing the hash.
Finding out what part of the certificate is used to generate the hash is quite challenging without a good understanding of the format of the certificate.

X.509 certificates are encoded using the [**ASN.1 (Abstract Syntax Notation.One)**](https://en.wikipedia.org/wiki/Abstract_Syntax_Notation_One) standard,
so if we can parse the ASN.1 structure, we can easily extract any field from a certificate.
The `openssl` program has a subcommand called `asn1parse`, which can be used to parse an X.509 certificate.

Print the entire ASN.1 structure:
```bash
$ openssl asn1parse -i -in c0.pem
```

Print the ASN.1 structure starting at octet 4 and write the result out to a file:
```bash
$ openssl asn1parse -i -in c0.pem -strparse 4 -out c0_body.bin -noout
```

Compute a hash:
```bash
$ sha256sum c0_body.bin
```

##### Step 5: Verify the signature
Now we have all the information, including the CA's public key, the CA's signature, and the body of the server's certificate.
We can run our own program to verify whether the signature is valid or not.
While `openssl` does provide a command to verify the certificate, students are required to use their own programs to do the verification.

### Submission
You need to submit a detailed lab report to describe what you have done and what you have observed, including relevant screenshots and code snippets.
For any important code snippets, you must also include an explanation of what the code does.
(Simply attaching code without any explanation will not receive credit.)
For any interesting or surprising observations, you also need to provide explanations for the observations.
You are encouraged to pursue further investigation, beyond what is required by the lab description.
