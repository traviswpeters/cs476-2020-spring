---
title: 'Lab 07: Packet Sniffing and Spoofing Lab'
localurl: './lab07_SEEDLab_Sniffing_Spoofing.pdf'
seedurl: 'https://seedsecuritylabs.org/Labs_16.04/'
layout: default
tags: [labs, seed]
published: False
---

## {{page.title}}
{:.titletext}
SEED Lab: A Hands-on Lab for Security Education
{:.subtitletext}

### Overview

Packet sniffing and spoofing are the two important concepts in network security; they are two major threats in network communication.
Being able to understand these two threats is essential for understanding security measures in networking.
There are many packet sniffing and spoofing tools, such as Wireshark, Tcpdump, Netwox, etc.
Some of these tools are widely used by security experts, as well as by attackers.
Being able to use these tools is important for students, but what is more important for students in a network security course is to understand how these tools work,
i.e., how packet sniffing and spoofing are implemented in software.

The objective of this lab is for students to master the technologies underlying most of the sniffing and spoofing tools.
Students will play with some simple sniffer and spoofing programs, read their source code, modify them, and eventually gain an in-depth understanding on the technical aspects of these programs.
At the end of this lab, students should be able to write their own sniffing and spoofing programs.

### Details

- This lab has been tested on the pre-built [SEEDUbuntu16.04 VM](https://seedsecuritylabs.org/lab_env.html).
- The complete description of tasks for this lab can be found in the PDF write-up: **[{{page.title}}]({{page.localurl}})**.

### Suggested Reading/Videos

- Chapter 15 in {{ site.data.settings.textbook }}
- [Programming with pcap](https://www.tcpdump.org/pcap.html)
- [Programming with Libpcap - Sniffing the Network From Our Own Application](http://recursos.aldabaknocking.com/libpcapHakin9LuisMartinGarcia.pdf)
