<h2><a href="https://codeforces.com/contest/1117/problem/A" target="_blank" rel="noopener noreferrer">1117A — Best Subsegment</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1117A](https://codeforces.com/contest/1117/problem/A) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Best Subsegment</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given array $$$a_1, a_2, \dots, a_n$$$. Find the subsegment $$$a_l, a_{l+1}, \dots, a_r$$$ ($$$1 \le l \le r \le n$$$) with maximum arithmetic mean $$$\frac{1}{r - l + 1}\sum\limits_{i=l}^{r}{a_i}$$$ (in floating-point numbers, i.e. without any rounding).</p><p>If there are many such subsegments find the <span class="tex-font-style-bf">longest</span> one.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains single integer $$$n$$$ ($$$1 \le n \le 10^5$$$) — length of the array $$$a$$$.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$0 \le a_i \le 10^9$$$) — the array $$$a$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the single integer — the length of the longest subsegment with maximum possible arithmetic mean.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005544657139758746" id="id009799318512799473" class="input-output-copier">Copy</div></div><pre id="id005544657139758746">5
6 1 6 6 0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00855679354318468" id="id0016885110546140714" class="input-output-copier">Copy</div></div><pre id="id00855679354318468">2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The subsegment $$$[3, 4]$$$ is the longest among all subsegments with maximum arithmetic mean.</p></div>