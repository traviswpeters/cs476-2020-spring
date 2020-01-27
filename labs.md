---
layout: default
---

<!-- links -->
[SEED Labs]: https://seedsecuritylabs.org

<!--
<div class="text-center">
<img class="card-img" src="../assets/seed_logo.png" alt="SEED Labs" style="width:25%">
</div>
-->

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
  For all labs, you should submit your lab report to D2L before the class on the due day.
  We may ask (randomly) selected students to give a demonstration.

## Labs

<ul>
{% assign sorted_pages = site.pages | sort: 'title' %}
{% for page in sorted_pages %}
{% for tag in page.tags %}
{% if tag == "labs" %}
<li><a href="{{ site.baseurl }}{{ page.url }}">{{page.title}}</a></li>
{% endif %}
{% endfor %}
{% endfor %}
</ul>

## Extra Credit

<ul>
{% assign sorted_pages = site.pages | sort: 'title' %}
{% for page in sorted_pages %}
{% for tag in page.tags %}
{% if tag == "extra-credit" %}
<li><a href="{{ site.baseurl }}{{ page.url }}">{{page.title}}</a></li>
{% endif %}
{% endfor %}
{% endfor %}
</ul>



{% comment %}

Setup
- [Lab 00: Setting Up The Lab Environment](labs/lab00)

Software Security
- [Lab 01: Environment Variable and Set-UID Program Lab](https://seedsecuritylabs.org/Labs_16.04/Software/Environment_Variable_and_SetUID/) *>> Software Security (Exploration)*{:.text-muted}
- [Lab 02: Shellshock Attack Lab](https://seedsecuritylabs.org/Labs_16.04/Software/Shellshock/) *>> Software Security (Attack)*{:.text-muted} [CVE-2014-6271](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2014-6271)
- [Lab 03: Buffer Overflow Vulnerability Lab](https://seedsecuritylabs.org/Labs_16.04/Software/Buffer_Overflow/) *>> Software Security (Attack)*{:.text-muted} --- [CVE-2015-7547](https://cve.mitre.org/cgi-bin/cvename.cgi?name=cve-2015-7547)
- [Lab 04: Return-to-libc Attack Lab](https://seedsecuritylabs.org/Labs_16.04/Software/Return_to_Libc/) and Return-Oriented Programming (ROP) *>> Software Security (Attack)*{:.text-muted}
- [Lab 05: Format-String Vulnerability Lab](https://seedsecuritylabs.org/Labs_16.04/Software/Format_String_Server/) *>> Software Security (Attack)*{:.text-muted}

Network & Web Security
- [Lab 06: SQL Injection Attack Lab](https://seedsecuritylabs.org/Labs_16.04/Web/Web_SQL_Injection/) *>> Web Security*{:.text-muted}
- [Lab 07: Packet Sniffing and Spoofing Lab](https://seedsecuritylabs.org/Labs_16.04/Networking/Sniffing_Spoofing/) *>> Network Security (Exploration)*{:.text-muted}
- [Lab 08: TCP/IP Attack Lab](https://seedsecuritylabs.org/Labs_16.04/Networking/TCP_Attacks/) *>> Network Security (Attack)*{:.text-muted}
<!-- - [Linux Firewall Exploration Lab](https://seedsecuritylabs.org/Labs_16.04/Networking/Firewall/) *>> Network Security (Exploration)*{:.text-muted} -->

Crypto
- [Lab 09: Secret-Key Encryption](https://seedsecuritylabs.org/Labs_16.04/Crypto/Crypto_Encryption/) *>> Crypto*{:.text-muted}
- [Lab 10: Hashing](...)
- [Lab 11: RSA Public-Key Encryption & Signature Lab](https://seedsecuritylabs.org/Labs_16.04/Crypto/Crypto_RSA/) *>> Crypto*{:.text-muted}

Recent Topics in Security
- [Lab 12: Heartbleed Attack Lab](https://seedsecuritylabs.org/Labs_16.04/Networking/Heartbleed/) *>> Network Security (Attack)*{:.text-muted} --- [Official Website](http://heartbleed.com), [CVE-2014-0160](https://cve.mitre.org/cgi-bin/cvename.cgi?name=cve-2014-0160)
- [Lab 13: Meltdown Attack Lab / Spectre Attack Lab](https://seedsecuritylabs.org/Labs_16.04/System/) *>> System Security*{:.text-muted} --- [Official Website](https://meltdownattack.com)

----

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





{% endcomment %}
