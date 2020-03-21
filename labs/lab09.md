---
title: 'Lab 09: Secret-Key Encryption Lab'
localurl: './lab09_SEEDLab_Crypto_Encryption.pdf'
seedurl: 'https://seedsecuritylabs.org/Labs_16.04/'
layout: default
tags: [labs, seed]
published: False
---

## {{page.title}}
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

### Overview

The learning objective of this lab is for students to get familiar with the concepts in the secret-key encryption.
After finishing the lab, students should be able to gain first-hand experience
with encryption algorithms, encryption modes, and other related concepts such as padding and initial vectors (IV).
Moreover, students will be able to use tools and write programs to encrypt/decrypt messages.

This lab covers the following topics:
- Secret-key encryption
- Substitution ciphers and frequency analysis
- Encryption modes, padding, and initialization vectors (IV)
- Programming using the OpenSSL crypto library

###### Resources

- Chapter 21 in {{ site.data.settings.textbook }}
- [Sample Code --- Encryption w/ the OpenSSL Cryptography and SSL/TLS Toolkit](https://www.openssl.org/docs/man1.0.2/man3/EVP_EncryptInit.html)
- [ciphertext.txt (Task 1)](https://seedsecuritylabs.org/Labs_16.04/Crypto/Crypto_Encryption/files/ciphertext.txt)
- [pic_original.bmp (Task 3)](https://seedsecuritylabs.org/Labs_16.04/Crypto/Crypto_Encryption/files/pic_original.bmp)
- [English Word List (Task 7)](https://seedsecuritylabs.org/Labs_16.04/Crypto/Crypto_Encryption/files/words.txt)

### Tasks
{:.titletext}
This lab has been tested on the pre-built [SEEDUbuntu16.04 VM](https://seedsecuritylabs.org/lab_env.html).
{:.subtitletext}
<!-- - The complete description of tasks for this lab can be found in the PDF write-up: **[{{page.title}}]({{page.localurl}})**. -->

#### Task 1: Frequency Analysis Against Monoalphabetic Substitution Cipher

In this task, you are given a cipher-text [(ciphertext.txt)](https://seedsecuritylabs.org/Labs_16.04/Crypto/Crypto_Encryption/files/ciphertext.txt)
that is encrypted using a monoalphabetic cipher;
namely, each letter in the original text is replaced by another letter, where the replacement does not vary
(i.e., a letter is always replaced by the same letter during the encryption).
Your task is to find out the original text using frequency analysis.
You may assume that the original text is an article written in the English language.

**How We Create the Ciphertext.**
To simplify the original article, we translate the original text in the following ways:
- We convert all uppercase letters to lowercase.
- We remove all punctuation and numbers.
- We preserve the spaces between words (in real encryption using monoalphabetic ciphers, spaces would be removed).
- Finally, we use a monoalphabetic cipher key to encipher the text.

These steps translate into the following code/commands:

```bash
# generate the key for the monoalphabetic cipher
$ python
>>> import random
>>> s = 'abcdefghijklmnopqrstuvwxyz'
>>> list = random.sample(s, len(s))
>>> ''.join(list)
'sxtrwinqbedpvgkfmalhyuojzc'
>>> quit()

# "clean up" the article
$ cat article.txt | tr [:upper:] [:lower:] | tr -cd '[a-z][\n][:space:]' > plaintext.txt

# encipher the plaintext
$ cat plaintext.txt | tr 'abcdefghijklmnopqrstuvwxyz' 'sxtrwinqbedpvgkfmalhyuojzc' > ciphertext.txt
```

**Tip.**
Using frequency analysis, you can find out the plaintext for some of the characters quite easily.
For those characters, you may want to change them back to their plaintext, as this may give you more clues.
If you are to change the text, and have plaintext mixed with ciphertext, it is a good idea to use capital letters for plaintext, so that for the same letter, we know which is plaintext and which is ciphertext.
You can use the `tr` command to achieve this.
For example, in the following, we replace letters a, e, and t in in.txt with letters X, G, E, respectively; the results are saved in out.txt.

```bash
$ tr 'aet' 'XGE' < in.txt > out.txt
```

**Additional Resources.**
You might also find these resources to be useful background:
- [https://en.wikipedia.org/wiki/Frequency_analysis](https://en.wikipedia.org/wiki/Frequency_analysis)
- [https://en.wikipedia.org/wiki/Bigram](https://en.wikipedia.org/wiki/Bigram)
- [https://en.wikipedia.org/wiki/Trigram](https://en.wikipedia.org/wiki/Trigram)

#### Task 2: Encryption using Different Ciphers and Modes

In this task, we will experiment with various encryption algorithms and modes.
You can use the following `openssl enc` command to encrypt/decrypt a file.
To see the relevant manual pages, you can type `man openssl` and `man enc`.
For example:

```bash
$ openssl enc -ciphertype -e -in plain.txt -out cipher.bin -K 00112233445566778889aabbccddeeff -iv 0102030405060708

# Common options:
# -in <file>  is the input file
# -out <file> is the output file
# -e          indicates that you want to (e)ncrypt
# -d          indicates that you want to (d)ecrypt
# -K/-iv      key/iv in hex
# -[pP]       print the iv/key (then exit if -P)
```

You should replace the `-ciphertype` with a specific cipher type, such as `-aes-128-cbc`, `-bf-cbc`, `-aes-128-cfb`, etc.
In this task, you should try at least 3 different ciphers.

#### Task 3: Encryption Modes --- ECB vs. CBC

The file [pic_original.bmp](https://seedsecuritylabs.org/Labs_16.04/Crypto/Crypto_Encryption/files/pic_original.bmp) contains a simple picture.
In this task, you must encrypt this picture so that people without the encryption key cannot know what is in the picture.
Please encrypt the file using the **ECB** (Electronic Code Book) and **CBC** (Cipher Block Chaining) modes, and then do the following:

1. Let us treat the encrypted picture as a picture, and use a picture viewing application to display it.
   However, for the `.bmp` file, the first 54 bytes contain the header information about the picture, so we have to set it correctly, so that the encrypted file can be treated as a legitimate `.bmp` file.
   We will replace the header of the encrypted picture with that of the original picture.
   We can use the `bless` hex editor tool (already installed on the SEED VM) to directly modify binary files.

   We can also use the following commands to get the header from `p1.bmp`, the data from `p2.bmp` (from offset 55 to the end of the file), and then combine the header and data together into a new file.
   ```bash
   $ head -c 54 p1.bmp  > header  # print the first 54 bytes and write to a file (header)
   $ tail -c +55 p2.bmp > body    # print all bytes starting at 55 and write to a file (body)
   $ cat header body > new.bmp    # create a new .bmp file (new.bmp) by con(cat)enating the header and body
   ```
2. Display the encrypted picture using a picture viewing program (there is an image viewer program called `eog` on the SEED VM).
   Can you derive any useful information about the original picture from the encrypted picture? Please explain your observations.

Now, select a picture of your choice, repeat the experiment above, and report your observations.

#### Task 4: Experimenting with Padding

For block ciphers, when the size of a plaintext is not a multiple of the block size, padding may be required.
All the block ciphers normally use **PKCS#5** padding, which is known as standard block padding.
We will conduct the following experiments to understand how this type of padding works:

1. Use ECB, CBC, CFB, and OFB modes to encrypt a file (you can pick any cipher).
   Please report which modes have paddings and which ones do not.
   For those that do not need paddings, please explain why.
2. Let us create three files, which contain 5 bytes, 10 bytes, and 16 bytes, respectively.

   We can use the following `echo -n` command to create such files.
   The following example creates a file `f1.txt` with length 5
   (without the -n option, the length will be 6, because a newline character will be added by echo):
   ```bash
   $ echo -n "12345" > f1.txt
   ```
   We then use `openssl enc -aes-128-cbc -e` to encrypt these three files using 128-bit AES with CBC mode.
   Please describe the size of the encrypted files.

   We would like to see what is added to the padding during the encryption.
   To achieve this goal, we will decrypt these files using `openssl enc -aes-128-cbc -d`.
   Unfortunately, decryption by default will automatically remove the padding, making it impossible for us to see the padding.
   However, the command does have an option called `-nopad`, which disables the padding, i.e., during the decryption, the command will not remove the padded data.
   Therefore, by looking at the decrypted data, we can see what data are used in the padding.
   Please use this technique to figure out what paddings are added to the three files.

   It should be noted that padding data may not be printable, so you need to use a hex tool to display the content.

   The following example shows how to display a file in the hex format:
   ```bash
   $ hexdump -C p1.txt
   00000000  31 32 33 34 35 36 37 38  39 49 4a 4b 4c 0a   |123456789IJKL.|
   $ xxd p1.txt
   00000000: 3132 3334 3536 3738 3949 4a4b 4c0a            123456789IJKL.
   ```

#### Task 5: Experimenting with Error Propagation and Corrupted Ciphertext

To understand the error propagation property of various encryption modes, in this task you will
create a ciphertext,
intentionally corrupt a bit in the ciphertext,
decrypt the corrupted ciphertext,
and then examine the result.

###### Part I

_**Before**_ you conduct this task, please answer the following question:
_How much information can you recover by decrypting the corrupted file, if the encryption mode is ECB, CBC, CFB, or OFB, respectively?_
Please note your answers (and provide justification for each) before proceeding with actually carrying out the steps below.

###### Part II

_**After**_ you have answered the questions in Part I,
please carry out the following steps (repeat for each encryption mode noted above):
1. Create a text file that is at least 1000 bytes long.
2. Encrypt the file using the AES-128 cipher.
3. Intentionally corrupt a single bit of the 55th byte in the encrypted file. (You can achieve this corruption using the bless hex editor.)
4. Decrypt the corrupted ciphertext file using the correct key and IV.

For each encryption mode noted above, was your hypothesis from Part I correct? Explain.

#### Task 6: Experimenting with the Initialization Vector (IV)

Most of the encryption modes require an initial vector (IV).
Properties of an IV depend on the cryptographic scheme used.
If we are not careful in selecting IVs,
_the encrypted data may not be secure at all, even though we are using a secure encryption algorithm and mode._
The objective of this task is to help students understand the problems that arise when an IV is not properly selected.
Please carry out the following experiments:

###### Task 6.1
A basic requirement for IV is uniqueness, which means that no IV may be reused under the same key.
To understand why, please encrypt the same plaintext using (1) two different IVs, and (2) the same IV.
Please describe your observation and explain why the IV needs to be unique.

###### Task 6.2
One may argue that if the plaintext does not repeat, using the same IV is safe.
Let us look at the Output Feedback (OFB) mode.
Assume that the attacker gets hold of a plaintext ($$P1$$) and a ciphertext ($$C1$$),
_can they decrypt other encrypted messages if the IV is always the same?_

Assume you are given the following information.
Please try to figure out the actual content of $$P2$$ based on $$C2$$, $$P1$$, and $$C1$$.

```bash
Plaintext  (P1): This is a known message!
Ciphertext (C1): a469b1c502c1cab966965e50425438e1bb1b5f9037a4c159

Plaintext  (P2): (unknown to you)
Ciphertext (C2): bf73bcd3509299d566c35b5d450337e1bb175f903fafc159
```

If we replace OFB in this experiment with CFB (Cipher Feedback), _how much of P2 can be revealed?_
You only need to answer the question; there is no need to demonstrate.

The attack used in this experiment is called the known-plaintext attack,
which is an attack model for cryptanalysis where the attacker has access to both the plaintext and its encrypted version (ciphertext).
If this can lead to the revealing of further secret information, the encryption scheme is not considered to be secure.

###### Task 6.3
From the previous tasks, we now know that IVs should not be reused.
Another important requirement for IV is that IVs need to be unpredictable for many schemes,
i.e., IVs need to be randomly generated.

In this task, we will observe what happens if IVs are predictable.

Assume that Bob just sent an encrypted message, and Eve knows that its content is either "Yes" or "No";
Eve can see the ciphertext and the IV used to encrypt the message, but since the AES encryption algorithm has been used,
Eve has no idea what the actual content is.
However, Eve knows that Bob uses predictable IVs, so Eve knows exactly what IV Bob is going to use next.
The following summarizes what Bob and Eve know:

```bash
Encryption method: 128-bit AES with CBC mode.

Key (in hex):    00112233445566778899aabbccddeeff (known only to Bob)

Ciphertext (C1): bef65565572ccee2a9f9553154ed9498 (known to both)

IV used on P1 (known to both)
     (in ascii): 1234567890123456
(in hex)  : 31323334353637383930313233343536

Next IV (known to both)
     (in ascii): 1234567890123457
     (in hex)  : 31323334353637383930313233343537
```

A good cipher should not only tolerate the known-plaintext attack described previously,
it should also tolerate the chosen-plaintext attack,
which is an attack model for cryptanalysis where the attacker can obtain the ciphertext for an arbitrary plaintext.
Since AES is a strong cipher that can tolerate the chosen-plaintext attack, Bob does not mind encrypting any plaintext given by Eve;
he does use a different IV for each plaintext, but unfortunately, the IVs he generates are not random, and they can always be easily predicted by Eve.

Your job is to construct a message $$P2$$, and ask Bob to encrypt it and give you the resulting ciphertext.
Your objective is to use this opportunity to figure out whether the actual content of P1 is "Yes" or "No".
**Hint:** You can read this Wikipedia page for ideas:
[https://en.wikipedia.org/wiki/Initialization_vector](https://en.wikipedia.org/wiki/Initialization_vector).

###### Extra Information --- Not Extra Credit ;-)
There are more advanced cryptanalysis techniques and requirements for IVs that are beyond the scope of this lab.
Students can read the following article for some more information: [https://defuse.ca/cbcmodeiv.htm](https://defuse.ca/cbcmodeiv.htm).

Because the requirements on IV really depend on cryptographic schemes, it is hard to remember what properties should be maintained when we select an IV.
However, our encrypted data will be safe if
(1) we  always use a new IV for each encryption, and
(2) the new IV is generated using a good pseudo random number generator (PRNG), so that the IV is not predictable by adversaries.

For those that are interested, there is another SEED lab (Random Number Generation Lab), which covers
details on how to generate cryptographically strong pseudo random numbers.

#### Task 7 (Extra Credit): Programming using the Crypto Library

In this task, you are given a plaintext and a ciphertext, and your goal is to write a C program to find the key that is used for the encryption.

You do know the following facts:
- The `aes-128-cbc` cipher is used for the encryption.
- The key used to encrypt this plaintext is an English word shorter than 16 characters;
  the word can be found in a typical English dictionary.
  Since the word has less than 16 characters (i.e. 128 bits),
  pound signs (#: hexadecimal value is 0x23) are appended to the end of the word to form a key of 128 bits.
  (**NOTE:** You can download a English word list from the Internet.
  We have also linked one here: [English Word List](https://seedsecuritylabs.org/Labs_16.04/Crypto/Crypto_Encryption/files/words.txt).)

The plaintext, ciphertext, and IV are as follows:
```bash
Plaintext (total 21 characters): This is a top secret.
Ciphertext (in hex format): 764aa26b55a4da654df6b19e4bce00f4
                            ed05e09346fb0e762583cb7da2ac93a2
IV (in hex format):         aabbccddeeff00998877665544332211
```

**Notes:**
- If you choose to store the plaintext message in a file, and feed the file to your program, you need to check whether the file length is 21.
  If you type the message in a text editor, you need to be aware that some editors may add a special character to the end of the file.
  The easiest way to store the message in a file is to use the following command (the `-n` flag tells `echo` not to add a trailing newline):
  ```bash
  $ echo -n "This is a top secret." > file
  ```
- In this task, you are supposed to write your own program to invoke the crypto library.
  No credit will be given if you simply use the `openssl` commands to do this task.
  Sample code can be found here:
  [https://www.openssl.org/docs/man1.0.2/crypto/EVP_EncryptInit.html](https://www.openssl.org/docs/man1.0.2/man3/EVP_EncryptInit.html)
- When you compile your code using `gcc`, do not forget to include the `-lcrypto` flag,
  because your code needs the crypto library.
  See the following example:
  ```bash
  $ gcc -o myenc myenc.c -lcrypto
  ```

### Submission
You need to submit a detailed lab report to describe what you have done and what you have observed, including relevant screenshots and code snippets.
For any important code snippets, you must also include an explanation of what the code does.
(Simply attaching code without any explanation will not receive credit.)
For any interesting or surprising observations, you also need to provide explanations for the observations.
You are encouraged to pursue further investigation, beyond what is required by the lab description.
