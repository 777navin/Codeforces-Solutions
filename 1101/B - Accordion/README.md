<h2><a href="https://codeforces.com/contest/1101/problem/B" target="_blank" rel="noopener noreferrer">1101B — Accordion</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1101B](https://codeforces.com/contest/1101/problem/B) |

## Topics
`greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Accordion</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>An <span class="tex-font-style-it">accordion</span> is a string (yes, in the real world accordions are musical instruments, but let's forget about it for a while) which can be represented as a concatenation of: an opening bracket (ASCII code $$$091$$$), a colon (ASCII code $$$058$$$), some (possibly zero) vertical line characters (ASCII code $$$124$$$), another colon, and a closing bracket (ASCII code $$$093$$$). The length of the accordion is the number of characters in it.</p><p>For example, <span class="tex-font-style-tt">[::]</span>, <span class="tex-font-style-tt">[:||:]</span> and <span class="tex-font-style-tt">[:|||:]</span> are accordions having length $$$4$$$, $$$6$$$ and $$$7$$$. <span class="tex-font-style-tt">(:|:)</span>, <span class="tex-font-style-tt">{:||:}</span>, <span class="tex-font-style-tt">[:]</span>, <span class="tex-font-style-tt">]:||:[</span> are not accordions. </p><p>You are given a string $$$s$$$. You want to transform it into an accordion by removing some (possibly zero) characters from it. Note that you may not insert new characters or reorder existing ones. Is it possible to obtain an accordion by removing characters from $$$s$$$, and if so, what is the maximum possible length of the result?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains one string $$$s$$$ ($$$1 \le |s| \le 500000$$$). It consists of lowercase Latin letters and characters <span class="tex-font-style-tt">[</span>, <span class="tex-font-style-tt">]</span>, <span class="tex-font-style-tt">:</span> and <span class="tex-font-style-tt">|</span>.</p></div><div class="output-specification"><div class="section-title">Output</div><p>If it is not possible to obtain an accordion by removing some characters from $$$s$$$, print $$$-1$$$. Otherwise print maximum possible length of the resulting accordion.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008638853133311605" id="id00287782052859366" class="input-output-copier">Copy</div></div><pre id="id008638853133311605">|[a:b:|]
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006753607818026823" id="id005309518563859335" class="input-output-copier">Copy</div></div><pre id="id006753607818026823">4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009627077339476247" id="id004301837991686388" class="input-output-copier">Copy</div></div><pre id="id009627077339476247">|]:[|:]
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0026644635202810263" id="id0011106446359877087" class="input-output-copier">Copy</div></div><pre id="id0026644635202810263">-1
</pre></div></div></div>