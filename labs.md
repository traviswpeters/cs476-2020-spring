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
  For all labs, You should submit a hardcopy of your lab report before the class on the due day.
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
