---
title: 'Lab 04: Return-to-libc Attack Lab'
localurl: './lab04_SEEDLab_Return_to_libc.pdf'
seedurl: 'https://seedsecuritylabs.org/Labs_16.04/Software/Return_to_Libc/'
layout: default
tags: [labs, seed]
published: True
---

## {{page.title}}
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

### Overview

The learning objective of this lab is for students to gain first-hand experience on an interesting attack related to buffer-overflow vulnerabilities;
this attack can bypass an existing protection scheme currently implemented in the Linux operating system.
A common way to exploit a buffer-overflow vulnerability is to overflow the buffer with malicious shellcode,
and then cause the vulnerable program to jump to the shellcode that is stored on the stack.
To prevent this kind of attack, some operating systems (e.g., Fedora Linux),
allow system administrators to configure program stacks to be non-executable;
as a result, any attempt to jump to (and execute) shellcode on the stack will cause the program to crash.

Unfortunately, the above protection scheme is not fool-proof.
There exists another type of attack, the return-to-libc attack, which does not depend on an executable stack; it does not even use shell code!
Instead, the return-to-libc attack causes the vulnerable program to jump to some existing code, such as the system() function in the libc library, which is already loaded into memory.

In this lab, students are given a program with a buffer-overflow vulnerability;
their task is to develop a return-to-libc attack to exploit the vulnerability and to obtain root privileges on the system.
In addition to learning about this attack, students will be guided to walk through several protection schemes that have been implemented in Linux as countermeasures against buffer-overflow attacks.
Students are tasked with evaluating the effectiveness of these countermeasures, as well as explaining why certain countermeasures are effective (or why they are not).

### Details

- This lab has been tested on the pre-built [SEEDUbuntu16.04 VM](https://seedsecuritylabs.org/lab_env.html).
- The complete description of tasks for this lab can be found in the PDF write-up: **[{{page.title}}]({{page.localurl}})**.

### Suggested Reading/Videos

- Chapter 5 in {{ site.data.settings.textbook }}
- A related YouTube Video recorded by Kevin Du. (recorded in 2016): [Return-to-libc Attack video lecture](https://youtu.be/LBo56Xyowvk).
