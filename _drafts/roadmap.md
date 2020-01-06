---
layout: default
published: true
---

## Roadmap

Myself and others at Montana State University have a vision of expanding the cybersecurity-related course offerings,
  as well as creating a Cybersecurity Masters program.
Currently, however, we have only a single course---Computer Security---to cover this fascinating area.

As a first step, I am selecting a subset of topics that have been covered in courses by
  [Wenliang (Kevin) Du](http://www.cis.syr.edu/~wedu/),
  [Charles Palmer](https://www.cs.dartmouth.edu/~ccpalmer/), and
  [Sean Smith](https://cs.dartmouth.edu/~sws/)---we are all greatly indebted to them.
I am primarily adopting topics from Kevin Du's [Computer & Internet Security: A Hands-on Approach (2nd Edition)](https://www.handsonsecurity.net) and the [SEED Labs](https://seedsecuritylabs.org)
  because I admire all of the work towards creating hands-on lessons for security education.

Below is a collection of topics modified from related courses that I envision for future courses at MSU.

<!-- Row 1 -->
<div class="row">

<div class="col-md-6 order-1 mt-3" markdown="1">
## [Computer Security](https://www.handsonsecurity.net/courses/compsec/syllabus.html)

**Introduction and Basics**
- Class Introduction (syllabus, policies, and projects)
- An Overview of Computer Security
- Course projects (labs)
- Unix Security Basics

**Software Security: Vulnerabilities, Attacks, and Countermeasures**
- Privileged programs (Set-UID programs) and vulnerabilities
- Buffer Overflow vulnerability and attack
- Return-to-libc attack
- Race Condition vulnerability and attack
- Dirty COW attack
- Format String vulnerability and attack
- Shellshock attack
- Heartbleed attack

**Web Security: Vulnerabilities, Attacks, and Coutermeasures**
- Same Origin Policy
- Cross-Site Scripting Attack
- Cross-Site Request Forgery Attack
- SQL-Injection Attack
- Click-Jacking Attack
- Web Tracking

**Smartphone Security**
- Access control in Android operating system
- Rooting Android devices
- Repackaging attacks
- Attacks on apps
- Whole-disk encryption
- Hardware protection: TrustZone

**Hardware Security**
- Meltdown attack
- Spectre attack
- 80x86 Protection Mode (access control in hardware)
</div>

<div class="col-md-6 order-2 mt-3" markdown="1">
## [Internet Security](http://www.cis.syr.edu/~wedu/Teaching/InternetSecurity/syllabus.html)

**Introduction and Overview**
- Internet Architecture
- How the Internet works (high-level overview)
- IP Address

**TCP/IP Protocols, Vulnerabilities, Attacks, and Countermeasures**
- Physical Layer: jamming attacks
- Data Link Layer: ARP protocol and ARP cache poisoning
- Network Layer: IP protocols, packet sniffering, IP Spoofing, IP fragmentation attacks
- Network Layer: ICMP protocol and ICMP misbehaviors
- Network Layer: IP Routing protocols and Attacks
- Transport Layer: TCP protocol, TCP session hijacking, reset and SYN flooding attacks
- DoS and DDoS attacks
- DNS protocol, attacks, and DNSSEC
- BGP protocol and Attacks

**Cryptography Basics and Applications**
- Secret-Key Encryption, DES, AES
- One-way Hash Functions, MD5, SHA-1, and SHA-2
- Length extension attacks, Collision attacks
- Diffie-Hellman Key Exchange
- Public-Key Encryption, RSA
- Digital Signatures
- Public-Key Infrastructure (PKI)
- Blockchains and Bitcoins
- Case Studies: common mistakes

**Network Security Mechanisms**
- IP Tunneling and SSH Tunneling
- Virtual Private Networks
- Firewalls
- Bypassing firewalls
- Transport Layer Security (TLS/SSL)
- TLS Programming
</div>

</div>
