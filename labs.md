---
layout: default
published: false
---

## [SEED Labs](https://seedsecuritylabs.org)

In this class, labs are hands-on exercises to guide you through real, practical activities related to a class topic.
Just like a Physics or Chemistry class, you follow the instructions and produce a lab report.
You submit your .pdf lab report through Canvas.

The labs we will use this term are from the SEED Labs project at Syracuse University in New York.
Started in 2002, funded by a total of 1.3 million dollars from NSF, and now used by over a thousand educational institutes worldwide,
  the SEED project's objective is to develop hands-on laboratory exercises (called SEED labs)
  for computer and information security education and help instructors adopt these labs in their curricula at no charge.

We, along with over a thousand other educational institutions around the world, thank Professor Wenliang Du for this superb effort.

## Environment Variable and Set-UID Program Lab <span class="note">SEED Lab: A Hands-on Lab for Security Education</span>

Set-UID is an important security mechanism in Unix operating systems.
When a Set-UID program runs, it assumes the owner's privileges.
For example, if the program's owner is root, then when anyone runs this program, the program gains the root's privileges during its execution.
Set-UID allows us to do many interesting things, but unfortunately, it is also the culprit of many bad things.
The objective of this lab is for students to understand what risks such privileged programs face and how they can be attacked if there are mistakes in the code.

### Lab Details

- The complete description of tasks for this lab can be found here: [Environment Variable and Set-UID Program Lab](https://seedsecuritylabs.org/Labs_16.04/PDF/Environment_Variable_and_SetUID.pdf).
- This lab has been tested on our pre-built [SEEDUbuntu16.04 VM](https://seedsecuritylabs.org/lab_env.html).
- You can view a related [video lecture](https://youtu.be/tZblgb5LYmk) recorded by  Kevin Du.
> This lecture covers how the environment variables and shell variables work, and how they would affect security.
> See Chapter 2 of my book https://www.handsonsecurity.net/ for detailed explanation.
> To get a hands-on experience, you can work on the following lab exercise: http://www.cis.syr.edu/~wedu/seed/Lab....

### Suggested Reading

- {{ site.data.settings.textbook }} (Chapter 1)
- [Checklist for Security of Setuid Programs](https://seedsecuritylabs.org/Labs_16.04/Software/Environment_Variable_and_SetUID/files/setuid.pdf)
- [Setuid Demystified](http://www.cis.syr.edu/%7Ewedu/minix/projects/setuid_paper.pdf)
- [How to write a Set-UID program](http://nob.cs.ucdavis.edu/%7Ebishop/secprog/1987-sproglogin.pdf)
