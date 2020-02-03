---
title: 'Lab 03: Buffer Overflow Vulnerability Lab'
localurl: './SEEDLab_Buffer_Overflow.pdf'
seedurl: 'https://seedsecuritylabs.org/Labs_16.04/Software/Buffer_Overflow'
layout: default
tags: [labs, seed]
published: True
---

## {{page.title}}
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

### Overview

The learning objective of this lab is for students to gain first-hand experience on buffer-overflow vulnerabilities by putting what they have learned about the vulnerability from class into action. A buffer overflow is defined as the condition in which a program attempts to write data beyond the boundaries of pre-allocated fixed length buffers. This vulnerability can be utilized by an attacker to alter the control flow of the program, and potentially even execute arbitrary pieces of code. This vulnerability arises due to the mixing of the storage for data (e.g., buffers) and controls (e.g., return addresses): an overflow in the data part can affect the control flow of the program if an overflow can change the return address.

**Activities:** Students are given a program that has the buffer-overflow problem, and they need to exploit the vulnerability to gain root privileges. Moreover, students will experiment with several protection schemes that have been implemented in Linux, and evaluate their effectiveness.

### Details

- This lab has been tested on the pre-built [SEEDUbuntu16.04 VM](https://seedsecuritylabs.org/lab_env.html).
- The complete description of tasks for this lab can be found in the PDF write-up: **[{{page.title}}]({{page.localurl}})**.

### Suggested Reading/Videos

- Chapter 3 in {{ site.data.settings.textbook }}
- [Smashing The Stack For Fun And Profit](https://web1.cs.wright.edu/people/faculty/tkprasad/courses/cs781/alephOne.html)
- Related YouTube Videos recorded by Kevin Du. (recorded in 2016):
[Part 1](https://youtu.be/3tUIcmG66y0),
[Part 2](https://youtu.be/eYlZt3yYBqM), and
[Part 3](https://youtu.be/vKE26N4_fIQ)
<!-- - Related video covered in a new Udemy course: [Computer Security: A Hands-on Approach (published in 2020)](https://www.udemy.com/course/du-computer-security/?couponCode=SEED2020FEB). -->

### Troubleshooting

- If you have trouble with the non-executable stack on your VM, please read this document:
[Notes on Non-Executable Stack](https://seedsecuritylabs.org/Labs_16.04/Software/Buffer_Overflow/files/NX.pdf)
