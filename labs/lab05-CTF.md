---
title: 'Lab 05: CTF Buffer Overflow Attack Lab'
localurl: ''
seedurl: ''
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

### Activity

This is the CTF (Capture The Flag) version of the buffer-overflow lab, where students compete to attack a vulnerable server set up by the instructor.

Students, working in groups, need to exploit the server's buffer-overflow vulnerability to gain remote access.

### Resources

All of the necessary materials for the CTF can be found on GitHub in our course repo:

**[https://github.com/traviswpeters/csci476-code/tree/master/CTF_buffer_overflow](https://github.com/traviswpeters/csci476-code/tree/master/CTF_buffer_overflow)**
{:.text-center}
