---
title: 'Lab 06: SQL Injection Attack Lab'
localurl: './lab06_SEEDLab_Web_SQL_Injection.pdf'
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

SQL injection is a code injection technique that exploits vulnerabilities in the interface between web applications and database servers.
The vulnerability is present when user's inputs are not correctly checked within a web application before being sent to back-end database servers.
Many web applications take inputs from users, and then use these inputs to construct SQL queries, so the web applications can get information from the database.
Web applications also use SQL queries to store information into the database.
These are common practices in the development of web applications.
When SQL queries are not carefully constructed, SQL injection vulnerabilities can occur.
The SQL injection attack is one of the most common attacks on web applications.

In this lab, we have created a web application that is vulnerable to the SQL injection attack.
Our web application includes the common mistakes made by many web developers.
It is the students' goal to find ways to exploit the SQL injection vulnerabilities,
 demonstrate the damage that can be achieved by the attack, and
 master the techniques that can help defend against such attacks.

### Details

- This lab has been tested on the pre-built [SEEDUbuntu16.04 VM](https://seedsecuritylabs.org/lab_env.html).
- The complete description of tasks for this lab can be found in the PDF write-up: **[{{page.title}}]({{page.localurl}})**.

### Suggested Reading/Videos

- Chapter 12 in {{ site.data.settings.textbook }}
- A related YouTube Video recorded by Kevin Du: [video lecture](https://youtu.be/_P8HCLkDInA).
