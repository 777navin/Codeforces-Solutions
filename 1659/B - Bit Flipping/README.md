<h2><a href="https://codeforces.com/contest/1659/problem/B" target="_blank" rel="noopener noreferrer">1659B — Bit Flipping</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1659B](https://codeforces.com/contest/1659/problem/B) |

## Topics
`bitmasks` `constructive algorithms` `greedy` `strings`

---

## Problem Statement

<div class="header"><div class="title">B. Bit Flipping</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a binary string of length $$$n$$$. You have <span class="tex-font-style-bf">exactly</span> $$$k$$$ moves. In one move, you must select a single bit. The state of all bits <span class="tex-font-style-bf">except</span> that bit will get flipped ($$$0$$$ becomes $$$1$$$, $$$1$$$ becomes $$$0$$$). You need to output the lexicographically largest string that you can get after using <span class="tex-font-style-bf">all</span> $$$k$$$ moves. Also, output the number of times you will select each bit. If there are multiple ways to do this, you may output any of them.</p><p>A binary string $$$a$$$ is lexicographically larger than a binary string $$$b$$$ of the same length, if and only if the following holds: </p><ul> <li> in the first position where $$$a$$$ and $$$b$$$ differ, the string $$$a$$$ contains a $$$1$$$, and the string $$$b$$$ contains a $$$0$$$. </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$)  — the number of test cases.</p><p>Each test case has two lines. The first line has two integers $$$n$$$ and $$$k$$$ ($$$1 \leq n \leq 2 \cdot 10^5$$$; $$$0 \leq k \leq 10^9$$$).</p><p>The second line has a binary string of length $$$n$$$, each character is either $$$0$$$ or $$$1$$$.</p><p>The sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output two lines.</p><p>The first line should contain the lexicographically largest string you can obtain.</p><p>The second line should contain $$$n$$$ integers $$$f_1, f_2, \ldots, f_n$$$, where $$$f_i$$$ is the number of times the $$$i$$$-th bit is selected. The sum of all the integers <span class="tex-font-style-bf">must be equal to</span> $$$k$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007846269828082237" id="id0066506441609358" class="input-output-copier">Copy</div></div><pre id="id007846269828082237"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">6 3</div><div class="test-example-line test-example-line-odd test-example-line-1">100001</div><div class="test-example-line test-example-line-even test-example-line-2">6 4</div><div class="test-example-line test-example-line-even test-example-line-2">100011</div><div class="test-example-line test-example-line-odd test-example-line-3">6 0</div><div class="test-example-line test-example-line-odd test-example-line-3">000000</div><div class="test-example-line test-example-line-even test-example-line-4">6 1</div><div class="test-example-line test-example-line-even test-example-line-4">111001</div><div class="test-example-line test-example-line-odd test-example-line-5">6 11</div><div class="test-example-line test-example-line-odd test-example-line-5">101100</div><div class="test-example-line test-example-line-even test-example-line-6">6 12</div><div class="test-example-line test-example-line-even test-example-line-6">001110</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0019543998128832674" id="id0022406207696023894" class="input-output-copier">Copy</div></div><pre id="id0019543998128832674">111110
1 0 0 2 0 0 
111110
0 1 1 1 0 1 
000000
0 0 0 0 0 0 
100110
1 0 0 0 0 0 
111111
1 2 1 3 0 4 
111110
1 1 4 2 0 4</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Here is the explanation for the first testcase. Each step shows how the binary string changes in a move.</p><ul> <li> Choose bit $$$1$$$: $$$\color{red}{\underline{1}00001} \rightarrow \color{red}{\underline{1}}\color{blue}{11110}$$$. </li><li> Choose bit $$$4$$$: $$$\color{red}{111\underline{1}10} \rightarrow \color{blue}{000}\color{red}{\underline{1}}\color{blue}{01}$$$. </li><li> Choose bit $$$4$$$: $$$\color{red}{000\underline{1}01} \rightarrow \color{blue}{111}\color{red}{\underline{1}}\color{blue}{10}$$$. </li></ul> The final string is $$$111110$$$ and this is the lexicographically largest string we can get.</div>