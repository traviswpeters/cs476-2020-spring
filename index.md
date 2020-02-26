---
layout: default
---

## About the Course

This course introduces students to introductory topics in computer and network security.
Throughout the semester students will be introduced to a variety of security issues in software design and development from technical, social, and legal viewpoints.
Topics include basic security concepts, security models, software security, network and web security, cryptography, and recent issues in computer and network security.

Students will study a variety of exploration tools, system defenses, and attacks on computer software and hardware.
<!-- These attacks are caused by the vulnerabilities in the design and implementation of computer systems. -->
The course emphasizes "learning by doing," and requires students to conduct a series of lab exercises.
Through these labs, students can enhance their understanding of the principles, and be able to apply those principles to solve real problems.

##### Prerequisites

Prior to taking this course, you should have fulfilled the following CSCI prerequisites:
{:.p-0 .m-0}
- [CSCI 112 --- C Programming (strongly recommended)](http://catalog.montana.edu/search/?P=CSCI%20112)
- [CSCI 232 --- Data Structures and Algorithms **(required)**](http://catalog.montana.edu/search/?P=CSCI%20232)
- [CSCI 460 --- Operating Systems (strongly recommended)](http://catalog.montana.edu/search/?P=CSCI%20460)
- [CSCI 466 --- Networks (strongly recommended)](http://catalog.montana.edu/search/?P=CSCI%20466)
{:.m-0}

If you do not have any of the above prerequisites, you should touch base with me as soon as possible.

## Logistics

##### Course Details
{:.pt-2}

**Lectures:** {{ site.data.settings.lectures }} _>> Course dates: {{ site.data.settings.dates }}_{:.text-muted} <br/>
**Textbook:** {{ site.data.settings.textbook }} <br/>
<!-- **Final Exam:** {{ site.data.settings.finalexamdate }} <br/> -->

##### Teaching Team

<div class="row mb-0 mt-0">

  <div class="col-sm-12 m-0 p-0">
    <div class="card border-0 m-0 p-0">
      <!-- <div class="row no-gutters"> -->
        <!-- <div class="col-sm-2 my-auto"> -->
          <!-- <img src="assets/me.png" class="card-img rounded-circle my-auto" alt="..." style="max-width: 75;"> -->
        <!-- </div> -->
        <!-- <div class="col-sm-10"> -->
          <div class="card-body mt-0 mb-0">
          <h6 class="card-title">Professor</h6>
          <p class="card-text" markdown="1">
            {{ site.data.settings.instructor }} <br/>
            {{site.data.settings.email}} <br/>
            **Office Hours:**
            {{site.data.settings.office}} \|
            {{ site.data.settings.officehours }}
          </p>
          </div>
        <!-- </div> -->
      <!-- </div> -->
    </div>
  </div>

  <div class="col-sm-12 m-0 p-0">
    <div class="card border-0 m-0 p-0">
      <!-- <div class="row no-gutters"> -->
        <!-- <div class="col-sm-2 my-auto"> -->
          <!-- <img src="assets/ta.png" class="card-img rounded-circle my-auto" alt="..." style="max-width: 75;"> -->
        <!-- </div> -->
        <!-- <div class="col-sm-10"> -->
          <div class="card-body pt-0">
          <h6 class="card-title">TA</h6>
          <p class="card-text" markdown="1">
            <i class="fas fa-user-circle"></i> [Seraj Mostafa](https://www.linkedin.com/in/sammbd/) <br/>
            <i class="fas fa-envelope"></i> [serajmostafa@montana.edu](mailto:serajmostafa@montana.edu?subject=CS 476 Help) <br/>
            **Office Hours:**
            <a href="https://www.montana.edu/calendar/locations.php?building=3"><i class="fas fa-map-pin"></i> BH 259 </a> \|
            Friday 10:00 am &ndash; 12:00 pm and by appointment.
          </p>
          </div>
        <!-- </div> -->
      <!-- </div> -->
    </div>
  </div>

</div>

##### Course Links

{{site.data.settings.seedcode}} *>> Code from the textbook, class examples, etc.*{:.text-muted} <br/>
{{site.data.settings.d2l}} *>> For submitting assignments, tracking course grades, etc.*{:.text-muted} <br/>
<!-- - {{site.data.settings.campuswire}} ({{site.data.settings.campuswirecode}}) *>> For **all** course-related communications*{:.text-muted} <br/> -->
{{site.data.settings.slackjoin}} *>> For **all** course-related communications*{:.text-muted} <br/>
<!-- - {{site.data.settings.piazza}} *>> For **all** course-related communications*{:.text-muted} <br/> -->
{{site.data.settings.gradescope}} (code: M675Z6) *>> For grading exams, providing exam feedback, etc.*{:.text-muted} <br/>
{{site.data.settings.ssc}} *>> Get help from TAs and peers*{:.text-muted} <br/>

## Schedule
{:.titletext}
This is a tentative schedule that is subject to change with minimal notice
{:.subtitletext}

Below is the calendar for this course.
It is the responsibility of the students to frequently check this web-page for schedule, readings, and assignment changes.
I will attempt to announce any change to the class, but this web-page should be viewed as authoritative.
If you have any questions, please contact me.

Feedback is always appreciated regarding typos, suggestions for more detailed explanations, additional examples, etc.

**Code from class and from the textbook can be found inline below and/or in this public GitHub repository: <br/> {{site.data.settings.seedcode}}**
{:.text-center}

<!-- Thanks! https://idratherbewriting.com/documentation-theme-jekyll/mydoc_tables.html -->
<table class="table table-hover table-striped table-bordered table-sm">
<colgroup>
<col width="10%" />
<col width="55%" />
<col width="35%" />
</colgroup>

<thead>
<tr class="header">
<th>Date</th>
<th>Topics & Lectures</th>
<th>Assignments & Reading</th>
</tr>
</thead>

<tbody>

<!-- Week 01  -->

<tr>
<td markdown="span">**Week 01**</td>
<td markdown="span" class="note">Introduction & Security Overview</td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">01/14/2020</td>
<td markdown="span">Class Introduction (syllabus, policies, course tools, labs, etc.) + Overview of Computer Security [slides][slides01]{:.slides}</td>
<td markdown="span">Get familiar with the course website</td>
</tr>
<tr>
<td markdown="span">01/16/2020</td>
<td markdown="span">
Review + Unix Security Basics [slides][slides02]{:.slides}
  <!-- <br/> >> _Basic model of a computer; layout of a program._ -->
  <!-- <br/> >> _Users and Groups._ -->
  <!-- <br/> >> _File Permissions: access control, umask, chmod, chown, chgrp, Set-UID_ -->
</td>
<td markdown="span">**{{ site.data.settings.questionnaire }} Due**</td>
</tr>

<!-- Week 02  -->

<tr>
<td markdown="span">**Week 02**</td>
<td markdown="span" class="note">Software Security --- Privileged Programs, Environment Variables, and Attacks via Program Inputs</td>
<td markdown="span" class="note">**Reading:** Chapters 1 & 2</td>
</tr>
<tr>
<td markdown="span">01/21/2020</td>
<td markdown="span">
The Set-UID Mechanism & Environment Variables (Part I) [slides][slides03]{:.slides}
</td>
<td markdown="span">
[Linux File Permissions Complete Guide](https://devconnected.com/linux-file-permissions-complete-guide/)
</td>
</tr>
<tr>
<td markdown="span">01/23/2020</td>
<td markdown="span">
The Set-UID Mechanism & Environment Variables (Part II) [slides][slides04]{:.slides}
</td>
<td markdown="span">**[Lab 00] "Due"** (Environment Setup) </td>
</tr>

<!-- Week 03  -->

<tr>
<td markdown="span">**Week 03**</td>
<td markdown="span" class="note">Software Security --- The Shellshock Attack</td>
<td markdown="span" class="note">
**Reading:** Chapters 3 & 9, [CVE-2014-6271](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2014-6271), [shellshocker.net](https://www.minttm.com/takeover-shellshocker-net)
</td>
</tr>
<tr>
<td markdown="span">01/28/2020</td>
<td markdown="span">The Shellshock Attack (Part I) [slides][slides05]{:.slides} </td>
<td markdown="span">
<!-- [CVE-2014-6271](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2014-6271) -->
</td>
</tr>
<tr>
<td markdown="span">01/30/2020</td>
<td markdown="span">The Shellshock Attack (Part II) [slides][slides06]{:.slides} </td>
<td markdown="span">**[Lab 01] Due** (Env. Variables & Set-UID Programs Lab)</td>
</tr>

<!-- Week 04  -->

<tr>
<td markdown="span">**Week 04**</td>
<td markdown="span" class="note">Software Security --- Buffer Overflow Vulnerabilities, Attacks, and Defenses</td>
<td markdown="span" class="note">**Reading:** Chapter 4</td>
</tr>
<tr>
<td markdown="span">02/04/2020</td>
<td markdown="span">Buffer Overflow Vulnerabilities, Attacks, and Defenses (Part I) [slides][slides07]{:.slides} </td>
<td markdown="span">[Demystifying the Execve Shellcode (Stack Method)](http://hackoftheday.securitytube.net/2013/04/demystifying-execve-shellcode-stack.html)</td>
</tr>
<tr>
<td markdown="span">02/06/2020</td>
<td markdown="span">Buffer Overflow Vulnerabilities, Attacks, and Defenses (Part II) [slides][slides08]{:.slides} </td>
<td markdown="span">**[Lab 02] Due** (Shellshock Lab)</td>
</tr>

<!-- Week 05  -->

<tr>
<td markdown="span">**Week 05**</td>
<td markdown="span" class="note">Software Security --- The Return-to-libc Attack & Return-Oriented Programming</td>
<td markdown="span" class="note">**Reading:** Chapter 5</td>
</tr>
<tr>
<td markdown="span">02/11/2020</td>
<td markdown="span">Return-to-libc Attacks [slides][slides09]{:.slides} </td>
<td markdown="span">[<i class="fas fa-external-link-alt"></i> **Early Semester Check-In** _(Google Form)_](https://forms.gle/eXM6wss7gdwCAw3CA)</td>
</tr>
<tr>
<td markdown="span">02/13/2020</td>
<td markdown="span">
Diving deeper into call frames, and function prologues/epilogues; <br/>
In-Class Active Learning for Lab 04 (Wrapping up our first Return-to-libc Attack) <br/>
[slides][slides10]{:.slides} [diagram1][diagram1]{:.code} [diagram2][diagram2]{:.code} [diagram3][diagram3]{:.code} [diagram4][diagram4]{:.code}
</td>
<td markdown="span">**[Lab 03] Due** (Buffer Overflow Lab)</td>
</tr>

<!-- Week 06  -->

<tr>
<td markdown="span">**Week 06**</td>
<td markdown="span" class="note">Software Security --- Wrapping up The Return-to-libc Attack & Return-Oriented Programming + CTF!</td>
<td markdown="span"></td>
<!-- <td markdown="span" class="note">Software Security --- Format String Vulnerabilities, Attacks, and Defenses</td> -->
<!-- <td markdown="span" class="note">**Reading:** Chapter 6</td> -->
</tr>
<tr>
<td markdown="span">02/18/2020</td>
<td markdown="span">
Generalizing Return-to-libc Attacks: Return-Oriented Programming [slides][slides11]{:.slides} </td>
<td markdown="span">
[The advanced return-into-lib(c) exploits (Nergal, 2001)](http://phrack.org/issues/58/4.html),<br/>
[The Geometry of Innocent Flesh on the Bone: Return-into-libc without Function Calls (on the x86)](https://hovav.net/ucsd/dist/geometry.pdf)
</td>
</tr>
<tr>
<td markdown="span">02/20/2020</td>
<td markdown="span">
Buffer Overflow CTF *(in class)* [slides][slides12]{:.slides}
*Also see [<b>CTF_buffer_overflow/</b>](https://github.com/traviswpeters/csci476-code/tree/master/CTF_buffer_overflow) on GitHub.*
</td>
<td markdown="span">**[Lab 04] Due** (Return-to-libc Attack Lab)</td>
</tr>


<!-- Week 07  -->

<tr>
<td markdown="span">**Week 07**</td>
<td markdown="span" class="note">Network & Web Security --- SQL Injection Attacks & Countermeasures</td>
<td markdown="span" class="note">**Reading:** Chapter 12</td>
</tr>
<tr>
<td markdown="span">02/25/2020</td>
<td markdown="span">
SQL Injection Attacks & Countermeasures (Part I) [slides][slides13]{:.slides}
</td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">02/27/2020</td>
<td markdown="span">
<span class="note">Travis in DC - Seraj teaches class.</span><br/>
SQL Injection Attacks & Countermeasures (Part II) [slides][slides14]{:.slides}
</td>
<td markdown="span">**[Lab 05] Due**</td>
</tr>

<!-- Week 08  -->

<tr>
<td markdown="span">**Week 08**</td>
<td markdown="span" class="note">Network & Web Security --- Packet Sniffing and Spoofing</td>
<td markdown="span" class="note">**Reading:** Chapter 15</td>
</tr>
<tr>
<td markdown="span">03/03/2020</td>
<td markdown="span"></td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">03/05/2020</td>
<td markdown="span"></td>
<td markdown="span">**[Lab 06] Due**</td>
</tr>

<!-- Week 09  -->

<tr>
<td markdown="span">**Week 09**</td>
<td markdown="span" class="note">Network & Web Security --- Attacks on the TCP Protocol</td>
<td markdown="span" class="note">**Reading:** Chapter 16</td>
</tr>
<tr>
<td markdown="span">03/10/2020</td>
<td markdown="span"></td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">03/12/2020</td>
<td markdown="span"></td>
<td markdown="span">**[Lab 07] Due**</td>
</tr>

<!-- Week 10  -->

<tr>
<td markdown="span">**Week 10**</td>
<td markdown="span" class="note">Enjoy the Break!</td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">03/17/2020</td>
<td markdown="span">**No Class. Spring Break!**</td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">03/19/2020</td>
<td markdown="span">**No Class. Spring Break!**</td>
<td markdown="span"></td>
</tr>

<!-- Week 11  -->

<tr>
<td markdown="span">**Week 11**</td>
<td markdown="span" class="note">Crypto --- Secret-Key Encryption</td>
<td markdown="span" class="note">**Reading:** Chapter 21</td>
</tr>
<tr>
<td markdown="span">03/24/2020</td>
<td markdown="span"></td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">03/26/2020</td>
<td markdown="span">**No Class. [NCUR 2020 @ MSU --- please attend!](http://www.cur.org/what/events/students/ncur/2020/ncur2020scheduleataglance)**</td>
<td markdown="span">**[Lab 08] Due**</td>
</tr>

<!-- Week 12  -->

<tr>
<td markdown="span">**Week 12**</td>
<td markdown="span" class="note">Crypto --- Secret-Key Encryption (cont.)</td>
<td markdown="span" class="note">**Reading:** Chapter 21</td>
</tr>
<tr>
<td markdown="span">03/31/2020</td>
<td markdown="span"></td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">04/02/2020</td>
<td markdown="span"></td>
<td markdown="span">**[NCUR 2020 Extra Credit Write-up] Due**</td>
</tr>

<!-- Week 13  -->

<tr>
<td markdown="span">**Week 13**</td>
<td markdown="span" class="note">Crypto --- Public Key Cryptography</td>
<td markdown="span" class="note">**Reading:** Chapter 23</td>
</tr>
<tr>
<td markdown="span">04/07/2020</td>
<td markdown="span"></td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">04/09/2020</td>
<td markdown="span"></td>
<td markdown="span">**[Lab 09] Due**</td>
</tr>

<!-- Week 14  -->

<tr>
<td markdown="span">**Week 14**</td>
<td markdown="span" class="note">Recent Topics in Security --- The Heartbleed Bug and Attack</td>
<td markdown="span" class="note">**Reading:** Chapter 20, [Official Website](http://heartbleed.com), [CVE-2014-0160](https://cve.mitre.org/cgi-bin/cvename.cgi?name=cve-2014-0160)
</td>
</tr>
<tr>
<td markdown="span">04/14/2020</td>
<td markdown="span"></td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">04/16/2020</td>
<td markdown="span"></td>
<td markdown="span">**[Lab 10] Due**</td>
</tr>

<!-- Week 15  -->

<tr>
<td markdown="span">**Week 15**</td>
<td markdown="span" class="note">Recent Topics in Security --- The Meltdown and Spectre Attacks</td>
<td markdown="span" class="note">**Reading:** Chapters 13 & 14, [Official Website](https://meltdownattack.com)</td>
</tr>
<tr>
<td markdown="span">04/21/2020</td>
<td markdown="span"></td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">04/23/2020</td>
<td markdown="span"></td>
<td markdown="span">**[Lab 11] Due**</td>
</tr>

<!-- Week 16  -->

<tr>
<td markdown="span">**Week 16**</td>
<td markdown="span" class="note">Course Wrap-Up</td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">04/28/2020</td>
<td markdown="span"></td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">04/30/2020</td>
<td markdown="span">Final Exam Review — _Come with questions and topics you’d like to review!_{:.text-muted}</td>
<td markdown="span">**[Lab 12] Due**</td>
</tr>

<!-- Week 17  -->

<tr>
<td markdown="span">**Week 17**</td>
<td markdown="span" class="note">Finals Week</td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">05/08/2020</td>
<td markdown="span">**Final Exam** - {{site.data.settings.finalexamdate}}</td>
<td markdown="span"></td>
</tr>


</tbody>
</table>

{% comment %}
_More Schedule Details Coming Soon..._
{:.alert .alert-primary .text-center}
{% endcomment %}

<!-- slides -->
[slides01]: files/cs476-01-intro2sec.pdf
[slides02]: files/cs476-02-intro2sec.pdf

[slides03]: files/cs476-03-setuid-envvars.pdf
[slides04]: files/cs476-04-setuid-envvars.pdf

[slides05]: files/cs476-05-shellshock.pdf
[slides06]: files/cs476-06-shellshock.pdf

[slides07]: files/cs476-07-buffer-overflow.pdf
[slides08]: files/cs476-08-buffer-overflow.pdf

[slides09]: files/cs476-09-rtlibc-and-rop.pdf
[slides10]: files/cs476-10-rtlibc-and-rop.pdf
[diagram1]: files/Basic_Anatomy_of_a_Stack_Frame.pdf
[diagram2]: files/How_to_Build_a_Stack_Frame_(GDB_Session).pdf
[diagram3]: files/Conventional_Enter_Leave_Sequence.pdf
[diagram4]: files/Non-Conventional_Enter_Leave_Sequence.pdf

[slides11]: files/cs476-11-rtlibc-and-rop.pdf
[slides12]: files/cs476-12-CTF.pdf

[slides13]: files/cs476-13-sql-attacks.pdf
[slides14]: files/cs476-14-sql-attacks.pdf

<!-- labs -->
[Lab 00]: labs/lab00
[Lab 01]: labs/lab01
[Lab 02]: labs/lab02
[Lab 03]: labs/lab03
[Lab 04]: labs/lab04
[Lab 05]: labs/lab05-CTF
[Lab 06]: labs/lab06
[Lab 07]: labs/lab07
[Lab 08]: labs/lab08
[Lab 09]: labs/lab09
[Lab 10]: labs/lab10
[Lab 11]: labs/lab11
[Lab 12]: labs/lab12
[NCUR 2020 Extra Credit Write-up]: labs/xc-ncur

<!-- code examples, provided code, etc. -->
[probe.c]: code/probe.c
[Makefile]: code/Makefile.txt
<!-- [Makefile]: {{site.data.settings.code}}/Makefile -->
<!-- [Vagrantfile]: {{site.data.settings.code}}/Vagrantfile -->

<!-- exams -->
[Sample Exam Coversheet]: {{site.data.settings.exams.files}}/exam-coversheet-sample.pdf

## Communication

We will use [Slack](https://slack.com) for all course communication (except for sensitive stuff like grades!).
> **Why?** Two reasons:
> (1) Because the majority of you indicated that you'd prefer to use Slack over other options, and
> (2) Most students will not use a proper learning management system (LMS) such as Brightspace/D2L, Blackboard, or Canvas after they receive their diplomas.
> On the other hand, students will almost certainly use a new collaboration tool at some point in their careers.
> Why not introduce one of the most powerful and popular ones while you are still in school?

Please **do** recall the link from above to sign up for our class's slack: {{site.data.settings.slackjoin}}

Please **do not** send me messages via D2L.

Please **do not** use e-mail *unless you absolutely have to*.

I typically won't respond to emails or Slack direct messages (DMs) past 7 p.m.
Generally speaking, I will not respond on weekends and certainly not immediately.
Please do not expect an instant answer if you send me an email or DM in Slack.
I sometimes go off the grid to focus---something that [a great deal of research suggests](https://www.amazon.com/Flow-Psychology-Experience-Perennial-Classics/dp/0061339202) you do too.

I definitely recommend using an appropriate channel (e.g., _**#labs**_) to discuss amongst yourselves.

Don't know how to use slack? [Thank goodness for the Internet](https://www.youtube.com/results?search_query=how+to+use+slack), am I right?

## Grading
{:.titletext}
These are tentative details that are subject to change with minimal notice
{:.subtitletext}

I am always happy to answer questions, but I do not pre-grade assignments.

I do not curve grades. The score you earn is the score you receive.

The grade breakdown is as follows:

- **Participation:** 10% _>> Engage in class/online discussions, ask questions, come to office hours, etc._{:.text-muted}
- **Final Exam:** 25% _>> I'll share a practice exam as we get closer to the end of the term._{:.text-muted}
- **Labs:** 65% _>> Labs (i.e., hands-on exercises) are the emphasis in this course. Start early, try stuff, talk with others... Most importantly, do them!_{:.text-muted}

#### Lab Grading Policy

Labs are typically made up of a series of tasks (tasks may have sub-tasks).
Each task/sub-task will be graded on the following scale:

**Incomplete (0), Low Pass (+1), Pass (+2), High Pass (+3).**

A high pass is earned if the solution presents a clear demonstration of the task at hand, as well as clear, correct, and concise description (including observations, explanations, etc.).
Solutions lacking clarity in the demonstration and/or the description will be awarded a low pass or pass (depending the quality of the solution).
A grade of incomplete is earned where no solution is present, or where the solution is incorrect or incoherent.

## Submitting Work

Submit assignments in **D2L**.

Assignments are **due @ 3:00pm** on the due date. _>> Due dates are before class starts on Thursdays this semester; this deadline should give you time to get to class on time :-)_{:.text-muted}

You can submit an assignment an unlimited number of times. Graders will only grade your most recent submission.

#### Late Penalties

This course moves _fast_, and your evaluation is primarily based on completing the lab assignments.
As such, we take timely submissions seriously.
The penalties for late submissions are as follows:

<!-- * &lt;  8 hours: 10% -->
* &lt; 24 hours: 25%
* &lt; 48 hours: 50%
* &ge; 48 hours: no credit.

I do understand, however, that extreme circumstances arise.
For this reason, you are allowed
 **at most one 'late pass' where your submission can be turned in up to 48 hours late with no penalty** &ndash; no excuse required.
To use your free late pass, indicate in a comment along with your submission on D2L that you are electing to use your free pass.
Note that you cannot change this decision later.

Please note, the no-penalty late pass **cannot** be used to extend your effective due date beyond 48 hours.
For example, if an assignment is due at 3pm on Thursday, you cannot apply your late pass *and* take additional late penalties on your assignment to extend your due date to 72 or 96 hours beyond the original deadline; whether you use the late pass or not, your (late) submission is due by 3pm on Saturday.

**No submissions (late pass or no late pass) will be accepted 48 hours after the original deadline.**

<!-- **Note:** this cannot be used to receive full credit on any assignment checkpoints. -->

## Getting help

You are _**always**_ welcome to come to my office hours as often as you like.

To get the most out of office hours, you might like reading [How To Ask Questions The Smart Way, by Eric Steven Raymond](http://www.catb.org/esr/faqs/smart-questions.html).

Note: I won't merely provide answers to assignments.
I believe in the [Socratic method](https://en.wikipedia.org/wiki/Socratic_method)
  and often [answer students' questions with questions](https://www.philsimon.com/blog/higher-education/analytics-students/).

All of this is to say: come ready to chat :-)

## Course Expectations

The expectations for the course are that students will attend every class, do any readings assigned for class, and actively and constructively participate in class discussions.
Class participation will be a measure of contributing to the discourse both in class, through discussion and questions, and outside of class through contributing and responding to class forums.

*Out of respect for your classmates, I ask that you turn off all laptops, tablets, and phone screens when they aren't needed for in-class activities!*

When we aren't using computers for in-class activities, I recommend (and research supports) that you write notes by hand.
> There is recent research that attests to the [negative impacts of learning and
> retention when multitasking](http://www.creativitypost.com/psychology/why_learning_and_multitasking_dont_mix).
> It has also been shown that [writing notes by hand rather than on a laptop](http://pss.sagepub.com/content/25/6/1159)
> engages different cognitive processes and has direct (positive) consequences
> for learning.

## Academic Honesty

Please review [MSU's Code of Conduct, Policies, Regulations, & Reports](http://catalog.montana.edu/code-conduct-policies-regulations-reports/).

A couple of clarifications and additions:
- Although you may discuss and design with others, the work you hand in (e.g., code, write-ups) must be entirely your own.
- Anything you submit that did not originate from you must be accompanied by attribution.
- Also, please do not share solutions or detailed information about solutions (e.g., specific code) with others.

## Religious Observances

Some students may wish to take part in religious observances that occur during this academic term.
If you have a religious observance that conflicts with your participation in the course, please meet with me as soon as possible to discuss appropriate accommodations.

## Accommodations & Disabilities

If you have a documented disability (including "invisible" disabilities such as chronic diseases and learning disabilities) for which you are or may be requesting any accommodation(s),
I encourage you to reach out to me and the [Office of Disability Services (ODS)](http://www.montana.edu/disabilityservices/) as soon as possible.
If you have a need for accommodations on exams, please see information on the [MSU's Testing Services website](http://www.montana.edu/testing/).
