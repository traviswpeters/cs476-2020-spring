---
layout: default
published: true
---

<!-- links -->
[VirtualBox 6.0.4]: https://www.virtualbox.org/wiki/Download_Old_Builds_6_0
[SEED Labs User Manual]: https://seedsecuritylabs.org/Labs_16.04/Documents/SEEDVM_VirtualBoxManual.pdf
[SEEDUbuntu16.04 virtual machine image]: https://seedsecuritylabs.org/lab_env.html
[SEED Labs]: https://seedsecuritylabs.org

## SEED Labs

In this class, you will work through lab assignments---hands-on exercises to guide you through real, practical activities related to a class topic.
Just like a Physics or Chemistry classes, you follow the instructions and produce a lab report.
You will submit your lab reports as a **PDF** through **D2L**.

The labs we will use this term are from the [SEED Labs] project at Syracuse University in New York.
Started in 2002, funded by a total of 1.3 million dollars from NSF, and now used by over a thousand educational institutes worldwide,
  the SEED project's objective is to develop hands-on laboratory exercises (called SEED labs)
  for computer and information security education,
  and to help instructors adopt these labs in their curricula at no charge.
We, along with over a thousand other educational institutions around the world, thank Professor Wenliang Du for this superb effort.


## Notes About Labs

- **Labs:**
  All labs are individual labs. You are encourage to discuss with others, but each student must independently carry out the tasks in the labs.
  You cannot copy code from other students. Any violation will be punished and reported to the university authority.
<!-- - **CTF (Capture The Flag) competition:**
  For these competitions (group based), grades will be based on the rankings of each group. -->
- **Lab Report:**
  For all labs, You should submit a hardcopy of your lab report before the class on the due day.
  We may ask (randomly) selected students to give a demonstration.


# Computer & Internet Security (Part I)

## Extra Credit Write-up - NCUR 2020
{:.titletext}

<!-- Motivated by https://guides.lib.montana.edu/c.php?g=915151&p=6594096 -->

Attend one session at the NCUR conference and write a 1-2 page reflection paper.
The session should be one you think you might be interested in and does not need to be related to this course (though it would be awesome if it were).
Even if the topic is not directly related to our course, there can be value in learning about topics that you are less familiar with.

Include in your paper:
- The title of the presentation and the speaker's name.
- Why you decided to attend the session.
- Why the presenter said they selected this topic to research (i.e., what is the motivation for their work?).
- What you found most interesting about the presentation.
- What (if any) connections can you make between this presentation and a topic (or topics) in our course?
- What do you think the presenter did well?  This can include items such as "spoke clearly, concise, polished, enthusiastic" and so forth.
- What do you think the presenter could improve upon?  
- What you think would be the most challenging thing about presenting at a conference? How could a person prepare for this challenge?   
<!-- - In thinking about the potential of you making a presentation, how do you think practicing would play a part of an effective presentation? -->

## Lab 0: Setting Up The Lab Environment
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

- **Virtual Machine Software:**
  Install [VirtualBox 6.0.4]. _Please stay away from the newer versions, because they have some issues with the SEED Labs VM._
- **Ubuntu 16.04 Virtual Machine Image:**
  Download the pre-built Ubuntu 16.04 virtual machine image.
  All the Linux labs use this image.
  To use this image, do the following:
  - Download the [SEEDUbuntu16.04 virtual machine image].
  - Unzip it, and you should be able to see a folder.
  - Follow the [SEED Labs User Manual] to run the VM on VirtualBox.

_**Note:**
For the lab setup, you do not need to submit anything.
However, we strongly urge you to get the environment set up as soon as possible, and start getting familiar with the environment.
For those who are not familiar with the Linux operating system, you may need to spend some extra time._


## Environment Variable and Set-UID Program Lab
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

- The complete description of tasks for this lab can be found here: [Environment Variable and Set-UID Program Lab](https://seedsecuritylabs.org/Labs_16.04/PDF/Environment_Variable_and_SetUID.pdf).
- This lab has been tested on our pre-built [SEEDUbuntu16.04 VM](https://seedsecuritylabs.org/lab_env.html).

### Suggested Reading/Videos

- {{ site.data.settings.textbook }} (Chapter 1 & 2)
- A related [video lecture](https://youtu.be/tZblgb5LYmk) recorded by  Kevin Du.
- [Checklist for Security of Setuid Programs](https://seedsecuritylabs.org/Labs_16.04/Software/Environment_Variable_and_SetUID/files/setuid.pdf)
- [Setuid Demystified](http://www.cis.syr.edu/%7Ewedu/minix/projects/setuid_paper.pdf)
- [How to write a Set-UID program](http://nob.cs.ucdavis.edu/%7Ebishop/secprog/1987-sproglogin.pdf)


## Shellshock Attack Lab
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## Buffer Overflow Vulnerability Lab
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## Return-to-libc Attack and Return-Oriented Programming (ROP)
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## Format String Attack Lab
{:.titletext .text-muted}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## Race Condition Vulnerability Lab
{:.titletext .text-muted}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## Dirty COW Attack Lab
{:.titletext .text-muted}
SEED Lab: A Hands-on Lab for Security Education
<br/>**Requires SEEDUbuntu12.04 VM**
{:.subtitletext}

## Meltdown Attack Lab and Spectre Attack Lab
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## Cross-Site Request Forgery Attack Lab
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## SQL Injection Attack Lab
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## Cross-Site Scripting Attack Lab
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## Android Repackaging Attack
{:.titletext .text-muted}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## Rooting Android Phones
{:.titletext .text-muted}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## Packet Sniffing and Spoofing Lab
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## Linux Firewall Lab
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## Bypassing firewalls using VPN
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## TCP/IP Attack Lab
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## Secret-Key Encryption
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## MD5 Collision Attack Lab
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## RSA Lab
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}


# Computer & Internet Security (Part II)

## DNS Attack Lab: (Part I: Local Attack)
{:.titletext .text-muted}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## DNS Attack Lab: (Part II: Remote Attack)
{:.titletext .text-muted}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## Public-Key Infrastructure (PKI) Lab
{:.titletext .text-muted}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

## Virtual Private Network (VPN) Lab (report and demo)
{:.titletext .text-muted}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}
