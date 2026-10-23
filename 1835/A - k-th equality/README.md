<h2><a href="https://codeforces.com/contest/1835/problem/A" target="_blank" rel="noopener noreferrer">1835A — k-th equality</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1835A](https://codeforces.com/contest/1835/problem/A) |

## Topics
`brute force` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. k-th equality</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Consider all equalities of form $$$a + b = c$$$, where $$$a$$$ has $$$A$$$ digits, $$$b$$$ has $$$B$$$ digits, and $$$c$$$ has $$$C$$$ digits. All the numbers are <span class="tex-font-style-bf">positive</span> integers and are written without leading zeroes. Find the $$$k$$$-th lexicographically smallest equality when written as a string like above or determine that it does not exist.</p><p>For example, the first three equalities satisfying $$$A = 1$$$, $$$B = 1$$$, $$$C = 2$$$ are </p><ul> <li> $$$1 + 9 = 10$$$, </li><li> $$$2 + 8 = 10$$$, </li><li> $$$2 + 9 = 11$$$. </li></ul><p>An equality $$$s$$$ is lexicographically smaller than an equality $$$t$$$ with the same lengths of the numbers if and only if the following holds: </p><ul> <li> in the first position where $$$s$$$ and $$$t$$$ differ, the equality $$$s$$$ has a smaller digit than the corresponding digit in $$$t$$$. </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line of input contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^3$$$) — the number of test cases. The description of test cases follows.</p><p>The first line of each test case contains integers $$$A$$$, $$$B$$$, $$$C$$$, $$$k$$$ ($$$1 \leq A, B, C \leq 6$$$, $$$1 \leq k \leq 10^{12}$$$).</p><p>Each input file has at most $$$5$$$ test cases which <span class="tex-font-style-bf">do not</span> satisfy $$$A, B, C \leq 3$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, if there are strictly less than $$$k$$$ valid equalities, output $$$-1$$$.</p><p>Otherwise, output the $$$k$$$-th equality as a string of form $$$a + b = c$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009903180926723362" id="id009763757334474287" class="input-output-copier">Copy</div></div><pre id="id009903180926723362"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1 1 9</div><div class="test-example-line test-example-line-even test-example-line-2">2 2 3 1</div><div class="test-example-line test-example-line-odd test-example-line-3">2 2 1 1</div><div class="test-example-line test-example-line-even test-example-line-4">1 5 6 42</div><div class="test-example-line test-example-line-odd test-example-line-5">1 6 6 10000000</div><div class="test-example-line test-example-line-even test-example-line-6">5 5 6 3031568815</div><div class="test-example-line test-example-line-odd test-example-line-7">6 6 6 1000000000000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00649276258637786" id="id009607120731616674" class="input-output-copier">Copy</div></div><pre id="id00649276258637786">2 + 1 = 3
10 + 90 = 100
-1
9 + 99996 = 100005
-1
78506 + 28543 = 107049
-1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the first $$$9$$$ solutions are: $$$\langle 1, 1, 2 \rangle, \langle 1, 2, 3 \rangle, \langle 1, 3, 4 \rangle, \langle 1, 4, 5 \rangle, \langle 1, 5, 6 \rangle, \langle 1, 6, 7 \rangle, \langle 1, 7, 8 \rangle, \langle 1, 8, 9 \rangle, \langle 2, 1, 3 \rangle$$$.</p><p>Int the third test case, there are no solutions as the smallest possible values for $$$a$$$ and $$$b$$$ are larger than the maximal possible value of $$$c$$$ — $$$10 + 10 = 20  \gt  9$$$.</p><p>Please note that whitespaces in the output <span class="tex-font-style-bf">matter</span>.</p></div>