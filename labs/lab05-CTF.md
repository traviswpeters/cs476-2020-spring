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

> **NOTE 1:**
> Many of you have asked if you can try the CTF outside of class (when I was running the server).
> **The answer is YES!**   
> See **Section 4** of the write-up.
> (You only need the vulnerable program, which is in the GitHub repo).

> **NOTE 2:** Some of you have asked about the settings I used for the various levels: 
> - Level 1 (buffer_size: 500)
> - Level 2 (buffer_size: 600, buffer_high: 140, buffer_low: 60)
> - Level 3 (buffer_size: 420, buffer_high: 100, buffer_low: 100, address_mask: 0xfffffc00)
> - Level 4 (buffer_size: 620)

### Lab Write-up

Each team should submit a lab report to describe their strategies in details.

All team members will get the same grade.

Please include your team number, the names of all members of your team.

You should include code in the report, with a reasonable amount explanation as to what it does... _or at least what it was supposed to do :)_

Since this CTF included 4 levels (recall **Section 3.2**)...
- For each level that you **completed**, please describe your thinking and share relevant code (or code snippets).
- For each level you **attempted**, but did not complete, please describe the strategy you were working on.
- For each level that you did not get to attempt in class, please share some thoughts on what you might have tried had you gotten to that level.

Because this was a class-wide experiment that you all participated in (thank you!), I am less concerned with the level your reached, and more focused on your thinking and strategies.
