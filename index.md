---
layout: default
---

## About the Course

This course introduces students to introductory topics in computer and network security.

Students will study a variety of attacks on computer software and hardware.
These attacks are caused by the vulnerabilities in the design and implementation of computer systems.
The course emphasizes "learning by doing," and requires students to conduct a series of lab exercises.
Through these labs, students can enhance their understanding of the principles, and be able to apply those principles to solve real problems.

##### Prerequisites

Prior to taking this course, you should have fulfilled the following CSCI prerequisites:
{:.p-0 .m-0}
- [CSCI 232 (required)](http://catalog.montana.edu/search/?P=CSCI%20232)
- [CSCI 460 (strongly recommended)](http://catalog.montana.edu/search/?P=CSCI%20460)
- [CSCI 466 (strongly recommended)](http://catalog.montana.edu/search/?P=CSCI%20466)
{:.m-0}

If you do not have any of the above prerequisites, you should touch base with me as soon as possible.

## Logistics

##### Course Details
{:.pt-2}

**Lectures:** {{ site.data.settings.lectures }} _>> Course dates: {{ site.data.settings.dates }}_{:.text-muted} <br/>
**Textbook:** {{ site.data.settings.textbook }} <br/>
<!-- **Final Exam:** {{ site.data.settings.finalexamdate }} <br/> -->

**Optional/Recommended Textbooks:**
{:.p-0 .m-0}
- [Security in Computing - 5th Edition](https://www.amazon.com/Security-Computing-5th-Charles-Pfleeger/dp/0134085043/ref=sr_1_1?keywords=Security+in+Computing&qid=1578348388&s=books&sr=1-1). Pfleeger, Pfleeger, and Margulies (2015).
- [The Craft of System Security - 1st Edition](https://www.amazon.com/Craft-System-Security-Sean-Smith/dp/0321434838). Sean Smith (2007).
- [Applied Cryptography: Protocols, Algorithms, and Source Code in C - 2nd Edition](http://www.amazon.com/Applied-Cryptography-Protocols-Algorithms-Source/dp/0471117099/ref=sr_1_1?ie=UTF8&s=books&qid=1233440847&sr=1-1). Bruce Schneier (1996).
- [Computer-Related Risks - 1st Edition](https://www.amazon.com/Computer-Related-Risks-Press-Peter-Neumann/dp/020155805X/ref=sr_1_1?ie=UTF8&s=books&qid=1233440795&sr=1-1). Peter G. Neumann (1995).

##### Teaching Team

**Professor:** {{ site.data.settings.instructor }} | {{site.data.settings.email}} | {{site.data.settings.office}} | {{site.data.settings.officephone}} <br/>
**Professor Office Hours:** {{site.data.settings.office}} | {{ site.data.settings.officehours }} <br/>
**Grader/Office Hours:** TBD / TBD <br/>

##### Course Links

{{site.data.settings.d2l}} *>> For submitting assignments, tracking course grades, etc.*{:.text-muted} <br/>
<!-- - {{site.data.settings.campuswire}} ({{site.data.settings.campuswirecode}}) *>> For **all** course-related communications*{:.text-muted} <br/> -->
<!-- - {{site.data.settings.slackjoin}} *>> For **all** course-related communications*{:.text-muted} <br/> -->
<!-- - {{site.data.settings.piazza}} *>> For **all** course-related communications*{:.text-muted} <br/> -->
{{site.data.settings.gradescope}} (code: M675Z6) *>> For grading exams, providing student feedback, etc.*{:.text-muted} <br/>
{{site.data.settings.ssc}} *>> Get help from TAs and peers*{:.text-muted} <br/>

##### Tools

<i class="fas fa-external-link-alt"></i> [VirtualBox](https://www.virtualbox.org) <br/>
<i class="fas fa-external-link-alt"></i> [Wireshark](https://www.wireshark.org) <br/>

## Schedule
{:.titletext}
This is a tentative schedule that is subject to change with minimal notice
{:.subtitletext}

Below is the calendar for this course.
It is the responsibility of the students to frequently check this web-page for schedule, readings, and assignment changes.
I will attempt to announce any change to the class, but this web-page should be viewed as authoritative.
If you have any questions, please contact me.

Feedback is always appreciated regarding typos, suggestions for more detailed explanations, additional examples, etc.

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
<td markdown="span">Class Introduction (syllabus, policies, course tools, labs, etc.)</td>
<td markdown="span">Get familiar with the course website</td>
</tr>
<tr>
<td markdown="span">01/16/2020</td>
<td markdown="span">
Overview of Computer Security + Unix Security Basics
  <br/> >> _Users and Groups._
  <br/> >> _File Permissions: access control, umask, chmod, chown, chgrp, Set-UID_
</td>
<td markdown="span">**{{ site.data.settings.questionnaire }} Due**</td>
</tr>

<!-- Week 02  -->

<tr>
<td markdown="span">**Week 02**</td>
<td markdown="span" class="note">Software Security</td>
<td markdown="span" class="note">**Reading:** Chapters 1 & 2</td>
</tr>
<tr>
<td markdown="span">01/21/2020</td>
<td markdown="span"></td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">01/23/2020</td>
<td markdown="span"></td>
<td markdown="span">**[Lab 00] Due**</td>
</tr>

<!-- Week 03  -->

<tr>
<td markdown="span">**Week 03**</td>
<td markdown="span" class="note">Software Security (cont.)</td>
<td markdown="span" class="note">**Reading:** Chapter 4</td>
</tr>
<tr>
<td markdown="span">01/28/2020</td>
<td markdown="span"></td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">01/30/2020</td>
<td markdown="span"></td>
<td markdown="span">**[Lab 01] Due**</td>
</tr>


<!-- Week 04  -->

<tr>
<td markdown="span">**Week 04**</td>
<td markdown="span" class="note">Software Security (cont.)</td>
<td markdown="span" class="note">**Reading:** Chapter 5</td>
</tr>
<tr>
<td markdown="span">02/04/2020</td>
<td markdown="span"></td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">02/06/2020</td>
<td markdown="span"></td>
<td markdown="span">**[Lab 02] Due**</td>
</tr>

<!-- Week 05  -->

<tr>
<td markdown="span">**Week 05**</td>
<td markdown="span" class="note">Software Security (cont.)</td>
<td markdown="span" class="note">**Reading:** Chapter 6</td>
</tr>
<tr>
<td markdown="span">02/11/2020</td>
<td markdown="span"></td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">02/13/2020</td>
<td markdown="span"></td>
<td markdown="span">**[Lab 03] Due**</td>
</tr>

<!-- Week 06  -->

<tr>
<td markdown="span">**Week 06**</td>
<td markdown="span" class="note">Software Security (cont.)</td>
<td markdown="span" class="note">**Reading:** Chapter 3</td>
</tr>
<tr>
<td markdown="span">02/18/2020</td>
<td markdown="span"></td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">02/20/2020</td>
<td markdown="span"></td>
<td markdown="span">**[Lab 04] Due**</td>
</tr>

{% comment %}

<!-- Week 07  -->

<tr>
<td markdown="span">**Week 07**</td>
<td markdown="span" class="note">Network & Web Security</td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">02/25/2020</td>
<td markdown="span"></td>
<td markdown="span"></td>
</tr>
<tr>
<td markdown="span">02/27/2020</td>
<td markdown="span"></td>                     <!-- Travis Traveling to DC - talk to TA about class coverage -->
<td markdown="span">**[Lab 05] Due**</td>
</tr>

<!-- Week 08  -->

<tr>
<td markdown="span">**Week 08**</td>
<td markdown="span" class="note">Network & Web Security (cont.)</td>
<td markdown="span"></td>
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
<td markdown="span" class="note">Network & Web Security (cont.)</td>
<td markdown="span"></td>
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
<td markdown="span" class="note"></td>
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
<td markdown="span" class="note">Crypto</td>
<td markdown="span"></td>
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
<td markdown="span" class="note">Crypto (cont.)</td>
<td markdown="span"></td>
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
<td markdown="span" class="note">Crypto (cont.)</td>
<td markdown="span"></td>
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
<td markdown="span" class="note">Recent Topics in Security</td>
<td markdown="span"></td>
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
<td markdown="span" class="note">Recent Topics in Security (cont.)</td>
<td markdown="span"></td>
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
<td markdown="span" class="note">Recent Topics in Security (cont.)</td>
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

{% endcomment %}

</tbody>
</table>

_More Schedule Details Coming Soon..._
{:.alert .alert-primary .text-center}

[Lab 00]: labs/lab00
[Lab 01]: #
[Lab 02]: #
[Lab 03]: #
[Lab 04]: #
[Lab 05]: #
[Lab 06]: #
[Lab 07]: #
[Lab 08]: #
[Lab 09]: #
[Lab 10]: #
[Lab 11]: #
[Lab 12]: #
[NCUR 2020 Extra Credit Write-up]: labs/xc-ncur

<!-- code examples, provided code, etc. -->
[Makefile]: {{site.data.settings.code}}/Makefile
[Vagrantfile]: {{site.data.settings.code}}/Vagrantfile
[uid.c]: {{site.data.settings.code}}/uid.c

<!-- slides -->
[slides01]: {{site.data.settings.slides}}/cs476-01-intro.pdf

<!-- exams -->
[Sample Exam Coversheet]: {{site.data.settings.exams.files}}/exam-coversheet-sample.pdf

## Grading
{:.titletext}
These are tentative details that are subject to change with minimal notice
{:.subtitletext}

I am always happy to answer questions, but I don't pre-grade assignments.

I do not curve grades. The score you earn is the score you receive.

- **Participation:** 10% _>> Engage in class/online discussions, ask questions, come to office hours, etc._{:.text-muted}
- **Final Exam:** 25% _>> I'll share a practice exam as we get closer to the end of the term._{:.text-muted}
- **Labs:** 65% _>> Labs (i.e., hands-on exercises) are the emphasis in this course. Start early, try stuff, talk with others... Most importantly, do them!_{:.text-muted}

## Submitting Work

Submit assignments in **D2L**.

Assignments are **due @ 3:00pm** on the due date. (Due dates are Thursdays this semester, so this deadline should give you time to get to class on time :-)

You can submit an assignment an unlimited number of times. Graders will only grade your most recent submission.
