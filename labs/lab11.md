---
title: 'Lab 11: The Meltdown Attack & Spectre Attack Lab'
localurl: './lab11_SEEDLab_Meltdown_Spectre.pdf'
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

This lab features two recent, high-profile attacks.

###### Meltdown

Discovered in 2017 and publicly disclosed in January 2018, the Meltdown exploits critical vulnerabilities existing in many modern processors, including those from Intel and ARM.
The vulnerabilities allow a user-level program to read data stored inside the kernel memory.
Such an access is not allowed by the hardware protection mechanism implemented in most CPUs, but a vulnerability exists in the design of these CPUs that makes it possible to defeat the hardware protection.
Because the flaw exists in the hardware, it is very difficult to fundamentally fix the problem, unless we change the CPUs in our computers.
The Meltdown vulnerability represents a special genre of vulnerabilities in the design of CPUs.
Along with the Spectre vulnerability, they provide an invaluable lesson for security education.

The learning objective of this lab is for students to gain first-hand experiences on the Meltdown attack.
The attack itself is quite sophisticated, so we break it down into several small steps, each of which is easy to understand and perform.
Once students understand each step, it should not be difficult for them to put everything together to perform the actual attack.

> Meltdown only works against Intel CPU, so if the host machine does not use Intel CPU, the attack in this lab will not work.
> Even if the OS of the host machine is patched, the attack still works, because we did not patch the Linux OS running inside the VM.

###### Spectre

Discovered in 2017 and publicly disclosed in January 2018, the Spectre attack exploits critical vulnerabilities existing in many modern processors, including those from Intel, AMD, and ARM.
The vulnerabilities allow a program to break inter-process and intra-process isolation, so a malicious program can read the data from the area that is not accessible to it.
Such an access is not allowed by the hardware protection mechanism (for inter-process isolation) or software protection mechanism (for intra-prcess isolation),
 but a vulnerability exists in the design of CPUs that makes it possible to defeat the protections.
Because the flaw exists in the hardware, it is very difficult to fundamentally fix the problem, unless we change the CPUs in our computers.
The Spectre vulnerability represents a special genre of vulnerabilities in the design of CPUs.
Along with the Meltdown vulnerability, they provide an invaluable lesson for security education.

The learning objective of this lab is for students to gain first-hand experiences on the Spectre attack.
The attack itself is quite sophisticated, so we break it down into several small steps, each of which is easy to understand and perform.
Once students understand each step, it should not be difficult for them to put everything together to perform the actual attack.

> Although the Spectre vulnerability is a common design flaw inside Intel, AMD, and ARM CPUs, we have only tested the lab activities on Intel CPUs.
> Even if the OS of the host machine is patched, the attack still works, because we did not patch the Linux OS running inside the VM.

###### Resources

- Chapters 13 & 14 in {{ site.data.settings.textbook }}
- The official website: [https://meltdownattack.com](https://meltdownattack.com)
- [Meltdown_Attack.zip](https://seedsecuritylabs.org/Labs_16.04/System/Meltdown_Attack/files/Meltdown_Attack.zip)
- [Spectre_Attack.zip](https://seedsecuritylabs.org/Labs_16.04/System/Spectre_Attack/files/Spectre_Attack.zip)

### Tasks
{:.titletext}
This lab has been tested on the pre-built [SEEDUbuntu16.04 VM](https://seedsecuritylabs.org/lab_env.html).
{:.subtitletext}
<!-- - The complete description of tasks for this lab can be found in the PDF write-up: **[{{page.title}}]({{page.localurl}})**. -->

> **NOTE:** This lab has been tested on our pre-built Ubuntu 12.04 VM and Ubuntu 16.04 VM, both of which can be downloaded from the SEED website.
  The Ubuntu 16.04 VM is still in the beta testing stage, so frequent changes are expected.
  It will be officially released in Summer 2018 for the Fall semester.
  When using this lab, keep the following in mind:

> **Meltdown:**
  **First**, the Meltdown vulnerability is a flaw inside Intel CPUs, so if a student’s machine is an AMD machine, the attack will not work.
  **Second**, Intel is working on fixing this problem in its CPUs, so if a student’s computer uses new Intel CPUs, the attack may not work.
  It is not a problem for now (February 2018), but six months from now, situations like this may arise.
  **Third**, although most students’ computers have already been patched,
  the attack is conducted inside our pre-built VM, which is not patched, so the attack will still be effective.
  Therefore, students should not update the VM’s operating system, or the attack may be fixed.

> **Spectre:**
  **First**, although the Spectre vulnerability is a common design flaw inside Intel, AMD, and ARM CPUs, we have only tested the lab activities on Intel CPUs.
  **Second**, Intel is working on fixing this problem in its CPUs, so if a student’s computer uses new Intel CPUs, the attack may not work.
  It is not a problem for now (February 2018), but six months from now, situations like this may arise.

#### Setup
For most of our tasks, you need to add `-march=native` flag when compiling the code with `gcc`.
The `-march` flag tells the compiler to enable all instruction subsets supported by the local machine.
For example, we compile `myprog.c` using the following command:

```bash
$ gcc -march=native -o myprog myprog.c
```

#### Task 1:
#### Task 2:
#### Task 3:
#### Task 4:
#### Task 5:
#### Task 6:
#### Task 7:
#### Task 8:

### Submission
You need to submit a detailed lab report to describe what you have done and what you have observed, including relevant screenshots and code snippets.
For any important code snippets, you must also include an explanation of what the code does.
(Simply attaching code without any explanation will not receive credit.)
For any interesting or surprising observations, you also need to provide explanations for the observations.
You are encouraged to pursue further investigation, beyond what is required by the lab description.
