---
title: 'Final Lab'
layout: default
tags: [final]
published: True
---

## {{page.title}}

The final lab is to be completed _**individually**_.
You are allowed to use any resources available to you (VM, notes, slides, textbook, Internet, etc.),
but you cannot ask someone (other than the course instructor) for help or get someone to solve the problems for you.
To be clear, posting questions or responses online is not allowed (no posting on Slack, D2L, or else where).
You can use Slack to direct message (DM) me if you need to ask me questions.
Any work used to arrive at a solution must be shown.
If an online resource was used, it must be cited.

_**Submissions must be submitted to D2L upon completion.**_
You need to submit a detailed lab report (**PDF**) to describe what you have done and what you have observed, including relevant screenshots and code snippets.
For any important code snippets, you must also include an explanation of what the code does.
(Simply attaching code or screenshots without any explanation will not receive credit.)
For any interesting or surprising observations, you also need to provide explanations for the observations.
You are encouraged to pursue further investigation, beyond what is required by the lab description.

The planned duration for the final lab is 1 week
(I think it should take approximately 3 hours to actually complete the final lab).

## Tasks
{:.titletext}
This lab has been tested on the pre-built [SEEDUbuntu16.04 VM](https://seedsecuritylabs.org/lab_env.html).
{:.subtitletext}

### Statement of Academic Honesty and Integrity

You _**must**_ include the following statement at the top of your submission (with your first name, last name, and Net ID filled in).

> I **firstname lastname (Net ID)** agree that the solutions presented below are entirely my own.
> If I have used resources that are not my own, I have included appropriate citations.
{:.mb-4}

### Task 1: Short Answer Questions [45 points]
_Short Answer. Please be clear and concise._
_(We only want to see that you understand what these concepts are.)_

##### Task 1.1 [3 points]
Both `system()` and `execve()` can be used to execute external programs. Why is `system()` considered to be unsafe while `execve()` is considered to be safe? 

##### Task 1.2 [3 points]
There are two typical approaches for letting normal users do privileged tasks:
One is to write a root-owned Set-UID program, and let the user run it;
another approach is to use a dedicated root daemon to do those privileged tasks for users.
Please compare the attack surfaces of these two approaches, and describe which one is more secure.

##### Task 1.3 [3 points]
For the Shellshock vulnerability to be exploitable, two conditions need to be satisfied. What are these two conditions?

##### Task 1.4 [3 points]
Suppose we run
```bash
$ nc -l 7070
```
on Machine 1 (IP address is 10.0.2.6),
and we then type the following command on Machine 2 (IP address is 10.0.2.7).

```bash
$ /bin/cat < /dev/tcp/10.0.2.6/7070 >&0
```
Describe what is going to happen. 

##### Task 1.5 [3 points]
What is ASLR and why does ASLR make buffer-overflow attacks more difficult?

##### Task 1.6 [3 points]
In the SYN flooding attack, why do we randomize the source IP address? Why can't we just use the same IP address?

##### Task 1.7 [3 points]
Are TCP Reset attacks effective against encrypted connections, such as SSH? Explain.

##### Task 1.8 [3 points]
We need to protect a packet, such that the payload of the packet is encrypted, but the integrity of the entire packet, including its header, is protected.
What encryption mode can we use to achieve this goal? Explain.

##### Task 1.9 [3 points]
In the Diffie-Hellman key exchange, Alice sends $$ g^x \bmod p $$ to Bob, and Bob sends $$ g^y \bmod p $$ to Alice.
How do they get a common secret?

##### Task 1.10 [3 points]
Why do we use hybrid encryption? Why don't we simply use public key cryptography to encrypt everything?

##### Task 1.11 [3 points]
When we learned about hashing, we discussed the issue of hash collisions.
Specifically, we discussed how cryptographic hash functions are designed to be _collision resistant_.
One way to understand how collisions can manifest is to not talk about hash functions, but rather, to talk about birthdays.
(Recall the video “Check your intuition: The birthday problem” from Week 13.)

Given that our class is wrapping up with _**66**_ students officially enrolled in the course,
what is the probability that _**at least 2 people**_ in our class share the same birthday? Explain.

_(Brownie points if you can use, e.g., Slack, to identify such a birthday "collision" in our class.)_

##### Task 1.12 [3 points]
Please describe what the following line of code does:
```python
pkt = sniff(filter='icmp and src host 10.0.2.9', prn=hdlpkt)
```

##### Task 1.13 [3 points]
Please briefly explain how the return-to-libc attack works.

##### Task 1.14 [3 points]
Identify at least three countermeasures to buffer-overflow attacks and briefly describe how they work.

##### Task 1.15 [3 points]
**(Part 1)** When you run programs at the commandline (e.g., `ls`, `cat`, `top`) or link to libraries (e.g., `libc`),
how are these programs/libraries found?
**(Part 2)** What is a potential risk of using this approach to find programs/libraries?

### Task 2: I Got 99 Problems But Auditing Ain't One [15 points]
Early in the semester we studied Set-UID programs and considered scenarios where Set-UID programs can be useful.
We considered various examples of Set-UID programs.
One example was a program to allow users to change their passwords.
Another example was a program to allow users to read (but not write) any file on a system, regardless of who owns the file.

In this task, we will consider the latter example ("system auditing"),
and you will demonstrate your understanding of the Set-UID mechanism as well as how it can be exploited.

[`audit.c`]: https://gist.github.com/traviswpeters/76be624297fb69a30254042f712d6d0a
[`audit2.c`]: https://gist.github.com/traviswpeters/e9786c9d8ff9cea79a78c76343953e93

<!-- <script src="https://gist.github.com/traviswpeters/76be624297fb69a30254042f712d6d0a.js"></script> -->

##### Task 2.1 [2 point]

Please read the source code for [`audit.c`] and, a high-level, describe what this program does and how it works.

(You can assume that the executable produced from [`audit.c`] will be modified to be a privileged Set-UID program.)

##### Task 2.2 [3 points]

With our understanding of [`audit.c`], please demonstrate how it can be exploited to run an arbitrary command with elevated privileges.

For your demonstration, you'll need to make the executable produced from [`audit.c`] a privileged Set-UID program.

##### Task 2.3 [10 points]

Suppose now that we want to fix the issue from the previous part.
A sysadmin tweaks the previous audit program and instead uses the new [`audit2.c`] program.
You can see that this new program uses `execve()` instead of `system()`, and now it uses the `more` program instead of `cat`.

Please read the manual of the `more` program to find out what the auditor could do to gain more privileges beyond what is intended by the sysadmin.
Your task is to explain, and demonstrate, how the auditor can exploit [`audit2.c`] to do something they should not be able to do.

Again, for your demonstration, you'll need to make the executable produced from [`audit2.c`] a privileged Set-UID program.

### Task 3: Inject This... [15 points]
In this task you will demonstrate your understanding of SQL Injection attacks.

_**NOTE:**_
In tasks 5.2 and 5.3 we ask that you not only explain your approach,
but also that you demonstrate that your approach can be successful.
For the purposes of this task, you may take whatever approach you like to conduct your demonstration.
For example, you may modify any of the code/examples from the lab on SQL Injections (Lab 06),
you may use the MySQL commandline, etc.
Whatever you do, you must explain your setup and your approach,
and you must present evidence that your attack is successful.

##### Task 3.1 [5 points]
To defeat SQL injection attacks, a web application has implemented a filtering scheme at the client side:
basically, on the page where users type their data, a filter is implemented using JavaScript.
It removes any special character found in the data, such as apostrophes, characters for comments, and keywords reserved for SQL statements.
Assume that the filtering logic does it job, and can remove all the code from the data;
is this solution able to defeat SQL injection attacks? Explain.

##### Task 3.2 [5 points]

The following SQL statement is sent to the database to add a new user to the database,
where the content of the `$name` and `$passwd` variables are provided by the user,
but the `EID` and `Salary` field are set by the system.
How can a malicious employee set his/her salary to a value higher than `80000`?
Please demonstrate and explain your approach.

```sql
$sql = "INSERT INTO employee (Name, EID, Password, Salary)
        VALUES ('$name', 'EID6000', '$passwd', 80000)";
```

##### Task 3.3 [5 points]
The following SQL statement is sent to the database, where `$eid` and `$passwd` contain data provided by the user.
An attacker wants to try to get the database to run an arbitrary SQL statement.
What should the attacker put inside `$eid` or `$passwd` to achieve that goal?
(In this task, you can and should enable the code/database to be able to execute multiple statements. )
Please demonstrate and explain your approach.

```sql
$sql = "SELECT * FROM employee  
        WHERE eid='$eid' and password='$passwd'";
```

### Task 4: Can't Crack This [25 points]
In this task you will demonstrate your understanding of various cryptographic operations.
Specifically, your objective will be to use your understanding of cryptographic operations to uncover secret information given only partial context.

##### Task 4.1: XOR Galore [10 points]

I've hidden some data using XOR with a single byte.
(Don't forget to decode from hex first.)

```bash
73626960647f6b206821204f21254f7d694f7624662065622127234f726927756d
```

You need to figure out what byte I used and what the correct decoded data is.
Note, you'll likely want to write a little, e.g., Python script, for this problem;
a brute force solution to this problem is permissible.
(**hint:** the correctly decoded data takes the form `crypto{ ...FLAG... }`)

_**Credit:** This problem inspired by 'The Favorite byte' challenge on [cryptohack.org](https://cryptohack.org)._{:.text-muted}

##### Task 4.2: I Lost My Key... Can You Help Me Out? [15 points]

In this task, you are given a plaintext, IV, and the corresponding ciphertext,
and your objective is to write a Python program to find the key that is used for the encryption.

The plaintext, ciphertext, and IV are as follows:
```bash
Plaintext (total 21 characters): This is a top secret.
Ciphertext (in hex format): 1e479ff8738e2dc5612c00e92782ea81
                            1231cbad8a6a9f9f52ff9c9148b9956a
IV (in hex format):         aabbccddeeff00998877665544332211
```

You know the following **facts**:
- The `aes-128-cbc` cipher is used for the encryption.
- The key used to encrypt this plaintext is an English word shorter than 16 characters;
  the word can be found in a typical English dictionary.
- Since the word has less than 16 characters (i.e. 128 bits),
  pound signs (#: hexadecimal value is 0x23) are appended to the end of the word to form a key of 128 bits.  
  (**NOTE:** You should download the following English word list: [English Word List](https://seedsecuritylabs.org/Labs_16.04/Crypto/Crypto_Encryption/files/words.txt).)

**Tips & Notes:**
- This does not require a lot of code. My solution is less than 30 lines of Python code.
- A brute force approach is permissible and straightforward. (In fact, I'm not sure of a better way...)
- I recommend storing the plaintext, ciphertext, and IV as variables in your program (no need to read these in from files).
- In this task, you are supposed to write your own program to invoke the crypto library.
  No credit will be given if you simply use the `openssl` commands to do this task.















<!-- ### Candidates... -->

<!-- ##### Task -->
<!-- Alice runs a Set-UID program that is owned by Bob. -->
<!-- The program tries to read from `/tmp/x`, which is readable to Alice, but not to anybody else. -->
<!-- Can this program successfully read from the file? -->
<!-- Please demonstrate. -->

<!--
##### Task
Sam found a very useful web page, which contains links to many interesting papers.
He wants to download those papers.
Instead of clicking on each of the links, he wrote a program that parses a HTML web page, get the papers URLs from the web page,
and then use a program called `wget` to fetch each identified URL.
See the following code snippet:

```C
char command[100];
char* line, url;
line = getNextLine(file);// Read in one line from the HTML file.
while (line != NULL) {
  // Parse the line to get a URL string.
  url = parseURL (line);
  if (url != NULL){
    // construct a command, and execute it
    sprintf(command, "%s %s", "wget", url);
    system(command);
}
  line = GetNextLine(file);
}
```

The function `sprintf()` is quite similar to `printf()`,
except that `sprintf()` puts the output in a buffer pointed by the first argument,
while `printf()` sends the output to the display.
Please be noted that the functions `getNextLine()` and `parseURL()` are also implemented by Sam (their code is not displayed here).
(Recall that the program `wget` is a command-line program in Unix that can be used to download web files from a given URL.)

The owner of the web page knows what Sam is doing with his page;
he wants to attack Sams program.
He knows the code above, but he does not know how Sam implements `GetNextLine()` or `ParseURL()`,
but he suspects that Sam may make some mistakes there.
(1) If you were the attacker, please describe how you could attack Sam's program.
(2) If you were Sam, how could you fix the problem?
-->
