---
layout: page
title: Blog
permalink: /blog/
---

<!-- use e.g. limit:12 to only show a subset. Changed it to 100-->

<h2 class="post-list-heading">{{ page.list_title | default: "Posts" }}</h2>
{% capture now %}{{'now' | date: '%s' | plus: 0 %}}{% endcapture %}
<ul class="post-list">
  {%- for post in site.posts limit:100 -%}
  {% capture date %}{{post.date | date: '%s' | plus: 0 %}}{% endcapture %}
  {% if date < now %}
  <li>
    <img src="{{ post.image | prepend: site.baseurl }}" alt="{{ post.title }}" title="{{ post.title }}">
    {%- assign date_format = site.minima.date_format | default: "%b %-d, %Y" -%}
    <span class="post-meta">{{ post.date | date: date_format }}</span>
    <span class="post-meta">• <a href="{{ post.url }}#disqus_thread" data-disqus-identifier="{{post.id}}">"{{ post.url | relative_url }}"</a></span>
    <h3>
      <a class="post-link" href="{{ post.url | relative_url }}">
        {{ post.title | escape }}
      </a>
    </h3>
    {% if post.categories contains 'announcement' %}
    <h4><em>Announcement by {{ post.author }}</em></h4>
    {% endif %}
    {% if post.categories contains 'post' %}
    <h4><em>Article by {{ post.author }}</em></h4>
    {% endif %}
    <p class="excerpt-text">
    {%- if site.show_excerpts -%}
      {{ post.excerpt }}
    {%- endif -%}
  </p>
  </li>
  {% endif %}
  {%- endfor -%}
</ul>
