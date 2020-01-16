---
title: 'Lab 01: Environment Variable and Set-UID Program Lab'
localurl: './SEEDLab_Environment_Variable_and_SetUID.pdf'
seedurl: 'https://seedsecuritylabs.org/Labs_16.04/PDF/Environment_Variable_and_SetUID.pdf'
layout: default
tags: [labs, seed]
published: False
---

## {{page.title}}
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

### Overview

Set-UID is an important security mechanism in Unix operating systems.
When a Set-UID program runs, it assumes the owner's privileges.
For example, if the program's owner is root, then when anyone runs this program, the program gains the root's privileges during its execution.
Set-UID allows us to do many interesting things, but unfortunately, it is also the culprit of many bad things.
The objective of this lab is for students to understand what risks such privileged programs face and how they can be attacked if there are mistakes in the code.

### Details

- The complete description of tasks for this lab can be found here: [{{page.title}}]({{page.localurl}})
- This lab has been tested on the pre-built [SEEDUbuntu16.04 VM](https://seedsecuritylabs.org/lab_env.html).

### Suggested Reading/Videos

- {{ site.data.settings.textbook }} (Chapter 1 & 2)
- A related [video lecture](https://youtu.be/tZblgb5LYmk) recorded by  Kevin Du.
- [Checklist for Security of Setuid Programs](https://seedsecuritylabs.org/Labs_16.04/Software/Environment_Variable_and_SetUID/files/setuid.pdf)
- [Setuid Demystified](http://www.cis.syr.edu/%7Ewedu/minix/projects/setuid_paper.pdf)
- [How to write a Set-UID program](http://nob.cs.ucdavis.edu/%7Ebishop/secprog/1987-sproglogin.pdf)
