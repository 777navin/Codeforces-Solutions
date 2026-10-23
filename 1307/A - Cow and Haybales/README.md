<h2><a href="https://codeforces.com/contest/1307/problem/A" target="_blank" rel="noopener noreferrer">1307A — Cow and Haybales</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1307A](https://codeforces.com/contest/1307/problem/A) |

## Topics
`greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Cow and Haybales</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>The USA Construction Operation (USACO) recently ordered Farmer John to arrange <span class="tex-font-style-it">a row</span> of $$$n$$$ haybale piles on the farm. The $$$i$$$-th pile contains $$$a_i$$$ haybales. </p><p>However, Farmer John has just left for vacation, leaving Bessie all on her own. Every day, Bessie the naughty cow can choose to move one haybale in any pile to an adjacent pile. Formally, in one day she can choose any two indices $$$i$$$ and $$$j$$$ ($$$1 \le i, j \le n$$$) such that $$$|i-j|=1$$$ and $$$a_i \gt 0$$$ and apply $$$a_i = a_i - 1$$$, $$$a_j = a_j + 1$$$. She may also decide to not do anything on some days because she is lazy.</p><p>Bessie wants to maximize the number of haybales in pile $$$1$$$ (i.e. to maximize $$$a_1$$$), and she only has $$$d$$$ days to do so before Farmer John returns. Help her find the maximum number of haybales that may be in pile $$$1$$$ if she acts optimally!</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line contains an integer $$$t$$$ ($$$1 \le t \le 100$$$)  — the number of test cases. Next $$$2t$$$ lines contain a description of test cases  — two lines per test case.</p><p>The first line of each test case contains integers $$$n$$$ and $$$d$$$ ($$$1 \le n,d \le 100$$$) — the number of haybale piles and the number of days, respectively. </p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$0 \le a_i \le 100$$$)  — the number of haybales in each pile.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one integer: the maximum number of haybales that may be in pile $$$1$$$ after $$$d$$$ days if Bessie acts optimally.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006245368690630932" id="id003965783105642332" class="input-output-copier">Copy</div></div><pre id="id006245368690630932">3
4 5
1 0 3 2
2 2
100 1
1 8
0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007490974126534073" id="id0036410817002423257" class="input-output-copier">Copy</div></div><pre id="id007490974126534073">3
101
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case of the sample, this is one possible way Bessie can end up with $$$3$$$ haybales in pile $$$1$$$: </p><ul> <li> On day one, move a haybale from pile $$$3$$$ to pile $$$2$$$ </li><li> On day two, move a haybale from pile $$$3$$$ to pile $$$2$$$ </li><li> On day three, move a haybale from pile $$$2$$$ to pile $$$1$$$ </li><li> On day four, move a haybale from pile $$$2$$$ to pile $$$1$$$ </li><li> On day five, do nothing </li></ul> <p>In the second test case of the sample, Bessie can do nothing on the first day and move a haybale from pile $$$2$$$ to pile $$$1$$$ on the second day.</p></div>