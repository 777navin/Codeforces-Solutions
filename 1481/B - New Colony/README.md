<h2><a href="https://codeforces.com/contest/1481/problem/B" target="_blank" rel="noopener noreferrer">1481B — New Colony</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1481B](https://codeforces.com/contest/1481/problem/B) |

## Topics
`brute force` `greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. New Colony</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>After reaching your destination, you want to build a new colony on the new planet. Since this planet has many mountains and the colony must be built on a flat surface you decided to flatten the mountains using boulders (you are still dreaming so this makes sense to you).</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/8f4e82e0c4a0d9a2560c231feb5f8feb3f09aebb.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>You are given an array $$$h_1, h_2, \dots, h_n$$$, where $$$h_i$$$ is the height of the $$$i$$$-th mountain, and $$$k$$$ — the number of boulders you have.</p><p>You will start throwing boulders from the top of the first mountain one by one and they will roll as follows (let's assume that the height of the current mountain is $$$h_i$$$): </p><ul> <li> if $$$h_i \ge h_{i + 1}$$$, the boulder will roll to the next mountain; </li><li> if $$$h_i  \lt  h_{i + 1}$$$, the boulder will stop rolling and increase the mountain height by $$$1$$$ ($$$h_i = h_i + 1$$$); </li><li> if the boulder reaches the last mountain it will fall to the waste collection system and disappear. </li></ul><p>You want to find the position of the $$$k$$$-th boulder or determine that it will fall into the waste collection system.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases.</p><p>Each test case consists of two lines. The first line in each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n \le 100$$$; $$$1 \le k \le 10^9$$$) — the number of mountains and the number of boulders.</p><p>The second line contains $$$n$$$ integers $$$h_1, h_2, \dots, h_n$$$ ($$$1 \le h_i \le 100$$$) — the height of the mountains.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$100$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print $$$-1$$$ if the $$$k$$$-th boulder will fall into the collection system. Otherwise, print the position of the $$$k$$$-th boulder.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005762778123096894" id="id0008610545127880076" class="input-output-copier">Copy</div></div><pre id="id005762778123096894">4
4 3
4 1 2 3
2 7
1 8
4 5
4 1 2 3
3 1
5 3 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008590095424107874" id="id006464403394135356" class="input-output-copier">Copy</div></div><pre id="id008590095424107874">2
1
-1
-1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Let's simulate the first case:</p><ul> <li> The first boulder starts at $$$i = 1$$$; since $$$h_1 \ge h_2$$$ it rolls to $$$i = 2$$$ and stops there because $$$h_2  \lt  h_3$$$. </li><li> The new heights are $$$[4,2,2,3]$$$. </li><li> The second boulder starts at $$$i = 1$$$; since $$$h_1 \ge h_2$$$ the boulder rolls to $$$i = 2$$$; since $$$h_2 \ge h_3$$$ the boulder rolls to $$$i = 3$$$ and stops there because $$$h_3  \lt  h_4$$$. </li><li> The new heights are $$$[4,2,3,3]$$$. </li><li> The third boulder starts at $$$i = 1$$$; since $$$h_1 \ge h_2$$$ it rolls to $$$i = 2$$$ and stops there because $$$h_2  \lt  h_3$$$. </li><li> The new heights are $$$[4,3,3,3]$$$. </li></ul><p>The positions where each boulder stopped are the following: $$$[2,3,2]$$$.</p><p>In the second case, all $$$7$$$ boulders will stop right at the first mountain rising its height from $$$1$$$ to $$$8$$$.</p><p>The third case is similar to the first one but now you'll throw $$$5$$$ boulders. The first three will roll in the same way as in the first test case. After that, mountain heights will be equal to $$$[4, 3, 3, 3]$$$, that's why the other two boulders will fall into the collection system.</p><p>In the fourth case, the first and only boulders will fall straight into the collection system.</p></div>