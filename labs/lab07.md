---
title: 'Lab 07: Packet Sniffing and Spoofing Lab'
localurl: './lab07_SEEDLab_Sniffing_Spoofing.pdf'
seedurl: 'https://seedsecuritylabs.org/Labs_16.04/'
layout: default
tags: [labs, seed]
published: True
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

###### Suggested Reading/Videos

- Chapter 15 in {{ site.data.settings.textbook }}
- [Programming with pcap](https://www.tcpdump.org/pcap.html)
- [Programming with Libpcap - Sniffing the Network From Our Own Application](http://recursos.aldabaknocking.com/libpcapHakin9LuisMartinGarcia.pdf)

### Tasks
{:.titletext}
This lab has been tested on the pre-built [SEEDUbuntu16.04 VM](https://seedsecuritylabs.org/lab_env.html).
{:.subtitletext}
<!-- The complete description of tasks for this lab can be found in the PDF write-up: **[{{page.title}}]({{page.localurl}})**. -->

<center class="mb-3 text-danger" markdown="span">
To ensure that this lab will work, please ensure the following configurations are set in your VM(s):
<br/>
In the VirtualBox GUI, go to **"Machine" -> "Settings" -> "Network" -> "Advanced" -> "Promiscuous Mode" -> "Allow All"**.
</center>

#### Task 1: Sniffing Packets
The overall objective of this task is to learn how to use Scapy to do packet sniffing in Python programs.

Below is a simple sniffer program (`sniffer.py`) written using python/scapy:
```Python
#!/usr/bin/python3
from scapy.all import *

def print_pkt(pkt):
  pkt.show()

pkt = sniff(filter='icmp',prn=print_pkt)
```
You can run the program as you would any other python program.
(You may need to install scapy for python3 on your VM. See the textbook for details.)
```
// Run the program with root privileges
$ sudo python sniffer.py
```
For scapy to work correctly, you must run Python using `sudo` (root privileges).

###### Task 1A
In the above code, for each captured packet, the callback function `print_pkt()` will be invoked;
this function will print out some of the information about the packet.
Run the program with root privileges and demonstrate that you can indeed capture packets.
After that, run the program again, but _without_ root privileges.
Describe and explain your observations.

###### Task 1B
Usually, when we sniff packets, we are only interested in certain types of packets.
We can select only certain packets by setting filters when designing our sniffer.
Scapy’s filtering uses the BPF (Berkeley Packet Filter) syntax.
_(There is a wealth of information about BPF on the Internet.)_

In this task, please set the following filters and demonstrate that your sniffer program works with each _(each filter should be set separately)_:
- Capture only ICMP packets
- Capture TCP packets that comes from a particular IP and with a destination port number 23.
- Capture packets that come from or go to a particular subnet. <br/> (You can pick any subnet, such as `128.230.0.0/16`; you should not pick the subnet that your VM is attached to.)

#### Task 2: Spoofing ICMP Packets
As a packet spoofing tool, Scapy enables us to set the fields of (IP) packets to arbitrary values.
The objective of this task is to spoof IP packets with an arbitrary source IP address.
Specifically, you should spoof ICMP echo request packets, and send them to another VM on the same network.
Then, use Wireshark to observe whether the ICMP echo request will be accepted by the receiver.
If it is accepted, an echo reply packet will be sent to the spoofed IP address.

**Hint:** You should make use of `IP()` and `ICMP()` objects within Scapy, as well as the packet layering operator `/`,
to construct and send an IP packet that contains an ICMP packet. Recall that you can look a packet object `p` using `p.show` or `ls(p)`.

#### Task 3: Traceroute
The objective of this task is to use Scapy to estimate the distance, in terms of number of routers, between your VM and a selected destination.
This is basically what is implemented by the traceroute tool.
In this task, you will write our own traceroute tool.

The idea is straightforward: first, send a packet (any type) to the destination, with its Time-To-Live (TTL) field set to 1.
This packet will be dropped by the first router, which will send us an ICMP error message, telling us that the time-to-live has exceeded.
That is how we get the IP address of the first router. We then increase our TTL field to 2, send out another packet, and get the IP address of the second router.
Repeat this procedure until a packet finally reaches the destination.
It should be noted that this experiment only gets an estimated result, because in theory, not all these packets take the same route
(but in practice, they may within a short period of time).

You should record the IP addresses you receive back for each incremental value of the `ttl` value.

You can use any means to capture these IP addresses (e.g., observations made via Wireshark, using scapy/python code), so long as you get an estimate for the number of hops.

**Hint:** Fields within an `IP()` packet that may be useful are `.dst` (the destination address) and `.ttl` (the time-to-live value).

#### Task 4: Sniffing and then Spoofing

In this task, you will combine the sniffing and spoofing techniques to implement the following sniff-and-then-spoof program.
**You need two VMs on the same LAN.**
From VM A, ping an IP X.
This will generate an ICMP echo request packet.
If X is alive, the ping program will receive an echo reply, and print out the response.
Your sniff-and-then-spoof program runs on VM B, which monitors the LAN through packet sniffing.
Whenever it sees an ICMP echo request, regardless of what the target IP address is, your program should immediately send out an echo reply using the packet spoofing technique.
Therefore, regardless of whether machine X is alive or not, the ping program will always receive a reply, indicating that X is alive.

You need to use Scapy to complete this task.
In your report, you need to provide evidence to demonstrate that your technique works.

### Submission

Students need to submit a detailed lab report to describe what they have done, what they have observed, and how they interpret the results.
Reports should include evidence to support the observations.
Evidence includes packet traces, screenshots, etc.
Reports should also list the important code snippets with explanations.
Simply attaching code without any explanation will not receive credit.
