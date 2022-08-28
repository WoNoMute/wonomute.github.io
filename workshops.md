---
layout: page
title: Workshops
permalink: /workshops/
---

<div class="post-content-blog">

<ul class="post-list">
  {%- for post in site.workshops && site.wonomuteyoung reversed-%}
  {% if post.category == "forthcoming" %}
  <li>
  <img src="{{ post.image | prepend: site.baseurl }}" alt="{{ post.title }}" title="{{ post.title }}">
    {%- assign date_format = site.minima.date_format | default: "%b %-d, %Y" -%}
    <span class="post-meta">{{ post.date | date: date_format }}</span>
    <!-- <span class="post-meta">• <a href="{{ post.url }}#disqus_thread" data-disqus-identifier="{{post.id}}">"{{ post.url | relative_url }}"</a></span>    -->
    <h3>
      <a class="post-link" href="{{ post.url | relative_url }}">
        {{ post.title | escape }}
      </a>
    </h3>
    <h4><em>Workshop</em></h4>
    <p class="excerpt-text">
    {%- if site.show_excerpts -%}
      {{ post.excerpt }}
    {%- endif -%}
    <strong><a href="{{ post.url | relative_url }}">
      »Read more
    </a></strong>
  </p>
  
  </li>
  {% endif %}
  {%- endfor -%}
</ul>

</div>
