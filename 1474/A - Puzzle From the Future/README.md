<h2><a href="https://codeforces.com/contest/1474/problem/A" target="_blank" rel="noopener noreferrer">1474A — Puzzle From the Future</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1474A](https://codeforces.com/contest/1474/problem/A) |

## Topics
`greedy`

---

## Problem Statement

<div class="header"><div class="title">A. Puzzle From the Future</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>In the <span class="tex-font-style-tt">$$$2022$$$</span> year, Mike found two binary integers $$$a$$$ and $$$b$$$ of length $$$n$$$ (both of them are written only by digits $$$0$$$ and $$$1$$$) that can have leading zeroes. In order not to forget them, he wanted to construct integer $$$d$$$ in the following way: </p><ul> <li> he creates an integer $$$c$$$ as a result of bitwise summing of $$$a$$$ and $$$b$$$ <span class="tex-font-style-it">without transferring carry</span>, so $$$c$$$ may have one or more $$$2$$$-s. For example, the result of bitwise summing of $$$0110$$$ and $$$1101$$$ is $$$1211$$$ or the sum of $$$011000$$$ and $$$011000$$$ is $$$022000$$$; </li><li> after that Mike replaces equal consecutive digits in $$$c$$$ by one digit, thus getting $$$d$$$. In the cases above after this operation, $$$1211$$$ becomes $$$121$$$ and $$$022000$$$ becomes $$$020$$$ (so, $$$d$$$ won't have equal consecutive digits). </li></ul><p>Unfortunately, Mike lost integer $$$a$$$ before he could calculate $$$d$$$ himself. Now, to cheer him up, you want to find <span class="tex-font-style-bf">any binary</span> integer $$$a$$$ of length $$$n$$$ such that $$$d$$$ will be <span class="tex-font-style-bf">maximum possible as integer</span>.</p><p>Maximum possible as integer means that $$$102  \gt  21$$$, $$$012  \lt  101$$$, $$$021 = 21$$$ and so on.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases.</p><p>The first line of each test case contains the integer $$$n$$$ ($$$1 \leq n \leq 10^5$$$) — the length of $$$a$$$ and $$$b$$$.</p><p>The second line of each test case contains binary integer $$$b$$$ of length $$$n$$$. The integer $$$b$$$ consists only of digits $$$0$$$ and $$$1$$$.</p><p>It is guaranteed that the total sum of $$$n$$$ over all $$$t$$$ test cases doesn't exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case output one <span class="tex-font-style-bf">binary</span> integer $$$a$$$ of length $$$n$$$. Note, that $$$a$$$ or $$$b$$$ may have leading zeroes but must have the same length $$$n$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004071382811542028" id="id00652484815552089" class="input-output-copier">Copy</div></div><pre id="id004071382811542028">5
1
0
3
011
3
110
6
111000
6
001011
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0017209050759795186" id="id0030068061752033703" class="input-output-copier">Copy</div></div><pre id="id0017209050759795186">1
110
100
101101
101110
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$b = 0$$$ and choosing $$$a = 1$$$ gives $$$d = 1$$$ as a result.</p><p>In the second test case, $$$b = 011$$$ so: </p><ul> <li> if you choose $$$a = 000$$$, $$$c$$$ will be equal to $$$011$$$, so $$$d = 01$$$; </li><li> if you choose $$$a = 111$$$, $$$c$$$ will be equal to $$$122$$$, so $$$d = 12$$$; </li><li> if you choose $$$a = 010$$$, you'll get $$$d = 021$$$. </li><li> If you select $$$a = 110$$$, you'll get $$$d = 121$$$. </li></ul> We can show that answer $$$a = 110$$$ is optimal and $$$d = 121$$$ is maximum possible.<p>In the third test case, $$$b = 110$$$. If you choose $$$a = 100$$$, you'll get $$$d = 210$$$ and it's the maximum possible $$$d$$$.</p><p>In the fourth test case, $$$b = 111000$$$. If you choose $$$a = 101101$$$, you'll get $$$d = 212101$$$ and it's maximum possible $$$d$$$.</p><p>In the fifth test case, $$$b = 001011$$$. If you choose $$$a = 101110$$$, you'll get $$$d = 102121$$$ and it's maximum possible $$$d$$$.</p></div>