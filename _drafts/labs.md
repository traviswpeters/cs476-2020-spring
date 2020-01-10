---
layout: default
published: true
---

Setup
- [Lab 00: Setting Up The Lab Environment](labs/lab00)

Software Security
- [Lab 01: Environment Variable and Set-UID Program Lab](https://seedsecuritylabs.org/Labs_16.04/Software/Environment_Variable_and_SetUID/) *>> Software Security (Exploration)*{:.text-muted}
- [Lab 02: Buffer Overflow Vulnerability Lab](https://seedsecuritylabs.org/Labs_16.04/Software/Buffer_Overflow/) *>> Software Security (Attack)*{:.text-muted} --- [CVE-2015-7547](https://cve.mitre.org/cgi-bin/cvename.cgi?name=cve-2015-7547)
- [Lab 03: Return-to-libc Attack Lab](https://seedsecuritylabs.org/Labs_16.04/Software/Return_to_Libc/) and Return-Oriented Programming (ROP) *>> Software Security (Attack)*{:.text-muted}
- [Lab 04: Format-String Vulnerability Lab](https://seedsecuritylabs.org/Labs_16.04/Software/Format_String_Server/) *>> Software Security (Attack)*{:.text-muted}
- [Lab 05: Shellshock Attack Lab](https://seedsecuritylabs.org/Labs_16.04/Software/Shellshock/) *>> Software Security (Attack)*{:.text-muted} [CVE-2014-6271](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2014-6271)

Network & Web Security
- [Lab 06: SQL Injection Attack Lab](https://seedsecuritylabs.org/Labs_16.04/Web/Web_SQL_Injection/) *>> Web Security*{:.text-muted}
- [Lab 07: Packet Sniffing and Spoofing Lab](https://seedsecuritylabs.org/Labs_16.04/Networking/Sniffing_Spoofing/) *>> Network Security (Exploration)*{:.text-muted}
- [Lab 08: TCP/IP Attack Lab](https://seedsecuritylabs.org/Labs_16.04/Networking/TCP_Attacks/) *>> Network Security (Attack)*{:.text-muted}
<!-- - [Linux Firewall Exploration Lab](https://seedsecuritylabs.org/Labs_16.04/Networking/Firewall/) *>> Network Security (Exploration)*{:.text-muted} -->

Crypto
- [Lab 09: Secret-Key Encryption](https://seedsecuritylabs.org/Labs_16.04/Crypto/Crypto_Encryption/) *>> Crypto*{:.text-muted}
- [Lab 10: RSA Public-Key Encryption & Signature Lab](https://seedsecuritylabs.org/Labs_16.04/Crypto/Crypto_RSA/) *>> Crypto*{:.text-muted}

Recent Topics in Security
- [Lab 11: Heartbleed Attack Lab](https://seedsecuritylabs.org/Labs_16.04/Networking/Heartbleed/) *>> Network Security (Attack)*{:.text-muted} --- [Official Website](http://heartbleed.com), [CVE-2014-0160](https://cve.mitre.org/cgi-bin/cvename.cgi?name=cve-2014-0160)
- [Lab 12: Meltdown Attack Lab / Spectre Attack Lab](https://seedsecuritylabs.org/Labs_16.04/System/) *>> System Security*{:.text-muted} --- [Official Website](https://meltdownattack.com)


----------------------------------------------------------------------------------------------------

<!-- links -->
[VirtualBox 6.0.4]: https://www.virtualbox.org/wiki/Download_Old_Builds_6_0
[SEED Labs User Manual]: https://seedsecuritylabs.org/Labs_16.04/Documents/SEEDVM_VirtualBoxManual.pdf
[SEEDUbuntu16.04 virtual machine image]: https://seedsecuritylabs.org/lab_env.html
[SEED Labs]: https://seedsecuritylabs.org

# Computer & Internet Security (Part I)

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
