---
layout: page
title: Directory
permalink: /directory-of-wonomute/
---

In the spirit of other similar directories of women in music tech, such as the [directory of WiMIR](https://wimir.wordpress.com/directory-of-wimir) and the [directory of WiNIME](https://annaxambo.me/directory-of-winime/), the aim of this directory is to showcase and make visible the work of the women members of the **Women Nordic Music Technology** organization:

<br />

<ul class="post-list directory">
  {%- for post in site.directory reversed -%}
  <li>
    <img src="{{ post.image | prepend: site.baseurl }}" alt="{{ post.title }}" title="{{ post.title }}">  
    {%- assign date_format = site.minima.date_format | default: "%b %-d, %Y" -%}
    <!-- <span class="post-meta">{{ post.date | date: date_format }}</span>
    <span class="post-meta">• <a href="{{ post.url }}#disqus_thread" data-disqus-identifier="{{post.id}}">"{{ post.url | relative_url }}"</a></span> -->
    <h3>
      <a class="post-link" href="{{ post.url | relative_url }}">
        {{ post.title | escape }}
      </a>
    </h3>
    <!-- <p><em>Interview by {{ post.author }}</em></p> -->


    <p class="excerpt-text">
    {%- if site.show_excerpts -%}
      {{ post.excerpt }}
    {%- endif -%}
    <strong><a href="{{ post.url | relative_url }}">
      »Read more
    </a></strong>
  </p>
  </li>
  {%- endfor -%}
</ul>
