---
layout: page
title: Wonomute Young Høsten 2023
permalink: /wonomuteyoung/
---
 
 **WoNoMute Young**

Er du ung kvinne eller ikke-binær, mellom 15-24 år og har lyst til å lære mer om musikk og teknologi? For eksempel vokalteknikk i studio, lyddesign, eller å lage egne musikkinstrumenter? Les isåfall videre!

WoNoMute Young er en organisasjon som holder gratis workshops i musikkteknologi for jenter og ikke-binære på Startblokka på Linderud. Vi åpner også et gratis drop-in makerspace for jenter onsdager fra kl. 15.00-21.00. Her kan du komme innom og prøve ut synther og effekter, lage musikk eller skape nye musikkinstrumenter med det utvalget vi har av elektronikk. Kom innom hvis du er nysgjerrig, eller meld deg på en eller flere av våre workshoper. Her er det lov å være nybegynner, og det er gratis.


Les mer om oss [her](/wonomuteyoung/om_oss).

**Program:**

<div class="post-content-blog">

<ul class="post-list">
  {%- for post in site.wonomuteyoung -%}
  {% if post.date >= site.time %}
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
      »Les mer
    </a></strong>
  </p>
  
  </li>
  {% endif %}
  {%- endfor -%}
</ul>

</div>
