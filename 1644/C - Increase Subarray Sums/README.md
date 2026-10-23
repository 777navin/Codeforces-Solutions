<h2><a href="https://codeforces.com/contest/1644/problem/C" target="_blank" rel="noopener noreferrer">1644C — Increase Subarray Sums</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1644C](https://codeforces.com/contest/1644/problem/C) |

## Topics
`brute force` `dp` `greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">C. Increase Subarray Sums</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a_1, a_2, \dots, a_n$$$, consisting of $$$n$$$ integers. You are also given an integer value $$$x$$$.</p><p>Let $$$f(k)$$$ be the maximum sum of a contiguous subarray of $$$a$$$ after applying the following operation: add $$$x$$$ to the elements on exactly $$$k$$$ <span class="tex-font-style-bf">distinct</span> positions. An empty subarray should also be considered, it has sum $$$0$$$.</p><p>Note that the subarray doesn't have to include all of the increased elements.</p><p>Calculate the maximum value of $$$f(k)$$$ for all $$$k$$$ from $$$0$$$ to $$$n$$$ independently.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 5000$$$) — the number of testcases.</p><p>The first line of the testcase contains two integers $$$n$$$ and $$$x$$$ ($$$1 \le n \le 5000$$$; $$$0 \le x \le 10^5$$$) — the number of elements in the array and the value to add.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$-10^5 \le a_i \le 10^5$$$).</p><p>The sum of $$$n$$$ over all testcases doesn't exceed $$$5000$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, print $$$n + 1$$$ integers — the maximum value of $$$f(k)$$$ for all $$$k$$$ from $$$0$$$ to $$$n$$$ independently.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006977152116313114" id="id0032923954805426703" class="input-output-copier">Copy</div></div><pre data-content="3
4 2
4 1 3 2
3 5
-2 -7 -1
10 2
-6 -1 -2 4 -6 -1 -4 4 -5 -4
" id="id006977152116313114"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">4 2</div><div class="test-example-line test-example-line-odd test-example-line-1">4 1 3 2</div><div class="test-example-line test-example-line-even test-example-line-2">3 5</div><div class="test-example-line test-example-line-even test-example-line-2">-2 -7 -1</div><div class="test-example-line test-example-line-odd test-example-line-3">10 2</div><div class="test-example-line test-example-line-odd test-example-line-3">-6 -1 -2 4 -6 -1 -4 4 -5 -4</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0003996860445998951" id="id0022038380715065908" class="input-output-copier">Copy</div></div><pre id="id0003996860445998951">10 12 14 16 18
0 4 4 5
4 6 6 7 7 7 7 8 8 8 8
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first testcase, it doesn't matter which elements you add $$$x$$$ to. The subarray with the maximum sum will always be the entire array. If you increase $$$k$$$ elements by $$$x$$$, $$$k \cdot x$$$ will be added to the sum.</p><p>In the second testcase: </p><ul> <li> For $$$k = 0$$$, the empty subarray is the best option. </li><li> For $$$k = 1$$$, it's optimal to increase the element at position $$$3$$$. The best sum becomes $$$-1 + 5 = 4$$$ for a subarray $$$[3, 3]$$$. </li><li> For $$$k = 2$$$, it's optimal to increase the element at position $$$3$$$ and any other element. The best sum is still $$$4$$$ for a subarray $$$[3, 3]$$$. </li><li> For $$$k = 3$$$, you have to increase all elements. The best sum becomes $$$(-2 + 5) + (-7 + 5) + (-1 + 5) = 5$$$ for a subarray $$$[1, 3]$$$. </li></ul></div>