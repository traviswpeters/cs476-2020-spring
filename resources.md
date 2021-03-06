---
layout: default
published: true
---

I'll keep a running collection of tools, papers, articles, and other interesting resources here.
Use as you see fit.

I may pull from here if relevant topics come up.
I'll also try to post links here to any relevant resources you share with me.

## Textbooks
{:.titletext}
The primary reference materials for classes and labs
{:.subtitletext}

###### Required Textbook(s)
- {{ site.data.settings.textbook }} <br/>

###### Optional/Recommended Textbook(s)
- [Security in Computing - 5th Edition](https://www.amazon.com/Security-Computing-5th-Charles-Pfleeger/dp/0134085043/ref=sr_1_1?keywords=Security+in+Computing&qid=1578348388&s=books&sr=1-1). Pfleeger, Pfleeger, and Margulies (2015).
- [The Craft of System Security - 1st Edition](https://www.amazon.com/Craft-System-Security-Sean-Smith/dp/0321434838). Sean Smith (2007).
- [Applied Cryptography: Protocols, Algorithms, and Source Code in C - 2nd Edition](http://www.amazon.com/Applied-Cryptography-Protocols-Algorithms-Source/dp/0471117099/ref=sr_1_1?ie=UTF8&s=books&qid=1233440847&sr=1-1). Bruce Schneier (1996).
- [Computer-Related Risks - 1st Edition](https://www.amazon.com/Computer-Related-Risks-Press-Peter-Neumann/dp/020155805X/ref=sr_1_1?ie=UTF8&s=books&qid=1233440795&sr=1-1). Peter G. Neumann (1995).

## Tools
{:.titletext}
Tools we will use in this class
{:.subtitletext}

- <i class="fas fa-external-link-alt"></i> [Wireshark](https://www.wireshark.org) <br/>
- <i class="fas fa-external-link-alt"></i> [VirtualBox](https://www.virtualbox.org) <br/>
  - [VirtualBox Networking Explained - NAT & Port Forwarding, Bridged, Internal, Host-Only](https://youtu.be/cDF4X7RmV4Q)
  - [VirtualBox Network Settings: Complete Guide](https://www.nakivo.com/blog/virtualbox-network-setting-guide/)
- <i class="fas fa-external-link-alt"></i> [SSH (Secure Shell)](https://www.ssh.com/ssh/) <br/>
  - [OpenSSH Config File Examples](https://www.cyberciti.biz/faq/create-ssh-config-file-on-linux-unix/)
  - [How to Create and Install SSH Keys From the Linux Shell](https://www.howtogeek.com/424510/how-to-create-and-install-ssh-keys-from-the-linux-shell/)
  - [ssh-keygen - Generate a New SSH Key](https://www.ssh.com/ssh/keygen/) (plus other helpful details)

##### SSH Into SEED VMs

[<i class="fas fa-play-circle"></i> **Watch my video walkthrough online here!**](https://montana.techsmithrelay.com/fEM2)
{:.text-center}

Many have asked how I SSH into the SEED VMs.
Below is a summary of my approach.
You should run all of the following commands on the host (not the guest/VM).

```bash
# set up port forwarding via VirtualBox.
# (You will need to know the ip address of the VM)
# I have a rule setup like this:
#   127.0.0.1:7333 --> 10.0.2.15:22

# *manually* test your SSH connection (login with your password):
ssh seed@127.0.0.1 -p 7333
```

Now, create a dedicated public/private keypair that will be used to facilitate SSH-ing into the VM:

```bash
# make sure you are in your .ssh folder (where you will stash keys, config file, etc.)
cd ~/.ssh

# generate your SSH keypair...
ssh-keygen -t rsa -b 4096 -f ~/.ssh/myseedkey -C "seedkey//travis"

# ...and install the PUBLIC KEY into the `authorized_users` w/ ssh-copy-id
ssh-copy-id -i ~/.ssh/myseedkey seed@127.0.0.1 -p PORT

# finally, test your connection using your new ssh key (not your password)
ssh -i ~/.ssh/myseedkey seed@127.0.0.1 -p PORT  
```

Once you've verified the connection, you can configure your `~/.ssh/config` file to make SSH-ing easier.
This is a minimal ssh rule that should work for SSH-ing into a SEED VM:

```bash
Host seed # the host name (e.g., 'ssh seed')
  HostName 127.0.0.1 # the IP address where the target ssh server can be found
  User seed # the user name
  Port 7333 # the forwarded port I setup in VirtualBox
  IdentityFile /Users/twp/.ssh/myseedkey # my ssh key file
```

Now you should be able to SSH into your VM with a simple command like this:

```bash
ssh seed
```

## Technical References
{:.titletext}
Great reference materials for labs and programming
{:.subtitletext}

- [Linux `man` pages](http://man7.org/linux/man-pages/dir_all_alphabetic.html)
- [The C Cheat Sheet](files/the-C-cheat-sheet.pdf)
- [GDB Cheatsheet](https://darkdust.net/files/GDB%20Cheat%20Sheet.pdf)
- [Bash scripting cheatsheet](https://devhints.io/bash)
- [ASCII/Decimal/Hex/Octal Reference Table](https://i.stack.imgur.com/mij6M.jpg)
- [Intel x86 Assembler Instruction Set Opcode Table](http://sparksandflames.com/files/x86InstructionChart.html)
- [A Tiny Guide to Programming in 32-bit x86 Assembly Language]({{site.data.settings.reading}}/tiny-guide-to-x86-assembly.pdf)
- [Browse the Linux Source Code *(thanks @bootlin!)*](https://elixir.bootlin.com/linux/latest/source)

<!-- - [x86 and amd64 instruction reference](https://www.felixcloutier.com/x86/) -->
<!-- - [System Programming Overview / Programming in C Refresher](http://www.lysator.liu.se/c/bwk-tutor.html) *#SysProgramming*{:.text-muted} *#Programming*{:.text-muted} -->
<!-- - [C and C++ in 5 days]({{site.data.settings.reading}}/C-in-5-days.pdf) *#Programming*{:.text-muted} -->
<!-- - [An Introduction to C Programming for Java Programmers]({{site.data.settings.reading}}/intro-to-C-for-java-programmers.pdf) *#Programming*{:.text-muted} -->
<!-- - [A Nice `Makefile` Tutorial](https://gist.github.com/isaacs/62a2d1825d04437c6f08) *#Programming*{:.text-muted} -->
<!-- - [The Linux Kernel Module Programming Guide]({{site.data.settings.reading}}/readme-linux-kernel-programming-lkmpg.pdf) *#SysProgramming*{:.text-muted} -->
<!-- - [PLT and GOT - the key to code sharing and dynamic libraries](https://www.technovelty.org/linux/plt-and-got-the-key-to-code-sharing-and-dynamic-libraries.html) *#SysProgramming*{:.text-muted} -->
<!-- - [POSIX Threads Programming](https://computing.llnl.gov/tutorials/pthreads/) *#Assignment1*{:.text-muted} -->
<!-- - [The 101 of ELF files on Linux: Understanding and Analysis](https://linux-audit.com/elf-binaries-on-linux-understanding-and-analysis/) -->

## Related Courses
{:.titletext}
Good for brushing up on topics as needed
{:.subtitletext}

- [CSCI 460: Operating Systems, Fall 2019 --- Taught by Travis Peters (me :-))](https://www.traviswpeters.com/cs460-2019-fall/)
- [CSCI 466: Computer Networks, Fall 2019 --- Taught by Seraj Mostafa (our TA!)](https://docs.google.com/document/d/e/2PACX-1vSToCOvQShCN07u-9DrPyQN8cQCMv1iCgMoDx_0oLqyhqzk430dSkx_UXNP3FvHA9YFXNpv_jd6epVm/pub)

## Articles, Research Papers, Feeds, Reading Lists
{:.titletext}
Where you might find other helpful and/or interesting information
{:.subtitletext}

- [Infographic: The Linux Kernel - What Is It, and How Does It Work?](https://www.cyberciti.biz/media/new/cms/2017/04/how-does-linux-kernel-works-explained.png)
- [IoT Security and Privacy Reading List](https://github.com/Beerkay/IoTResearch)
- [How to Create a Password That is Actually Secure](https://www.freecodecamp.org/news/actually-secure-passwords/)
- [The Greatest Hits in Side Channel Attacks](https://noorsiddiqui.com/greatest-hits-in-sidechannel-attacks/)
- [SHA-1](https://en.wikipedia.org/wiki/SHA-1)
  - **(collision attack / identical prefix collision)** [At death’s door for years, widely used SHA1 function is now dead](https://arstechnica.com/information-technology/2017/02/at-deaths-door-for-years-widely-used-sha1-function-is-now-dead/)
  - **(chosen prefix attack)** [PGP keys, software security, and much more threatened by new SHA1 exploit](https://arstechnica.com/information-technology/2020/01/pgp-keys-software-security-and-much-more-threatened-by-new-sha1-exploit/)
  - The Paper: [SHA-1 is a Shambles: First Chosen-Prefix Collision on SHA-1 and Application to the PGP Web of Trust](https://eprint.iacr.org/2020/014.pdf)
- [Small world with high risks: a study of security threats in the npm ecosystem](https://www.usenix.org/conference/usenixsecurity19/presentation/zimmerman)
- [in-toto: Providing farm-to-table guarantees for bits and bytes](in-toto: Providing farm-to-table guarantees for bits and bytes)
- [Detecting and Characterizing Lateral Phishing at Scale](https://www.usenix.org/conference/usenixsecurity19/presentation/ho)
- [Invisible Mask: Practical Attacks on Face Recognition with Infrared](https://arxiv.org/abs/1803.04683)
- ["I was told to buy a software or lose my computer. I ignored it": A study of ransomware](https://www.usenix.org/conference/soups2019/presentation/simoiu)
- [Four different tricks to bypass StackShield and StackGuard protection](https://www.cs.purdue.edu/homes/xyzhang/spring07/Papers/defeat-stackguard.pdf)
