<h2><a href="https://codeforces.com/contest/1523/problem/B" target="_blank" rel="noopener noreferrer">1523B — Lord of the Values</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1523B](https://codeforces.com/contest/1523/problem/B) |

## Topics
`constructive algorithms`

---

## Problem Statement

<div class="header"><div class="title">B. Lord of the Values</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><center> <img class="tex-graphics" height="378px" src="https://espresso.codeforces.com/16b5b964dd8e62e0574290a998664c6e18c34884.png" style="max-width: 100.0%;max-height: 100.0%;" width="567px"> </center><p>While trading on his favorite exchange trader William realized that he found a vulnerability. Using this vulnerability he could change the values of certain internal variables to his advantage. To play around he decided to change the values of all internal variables from $$$a_1, a_2, \ldots, a_n$$$ to $$$-a_1, -a_2, \ldots, -a_n$$$. For some unknown reason, the number of service variables is always an even number.</p><p>William understands that with his every action he attracts more and more attention from the exchange's security team, so the number of his actions must not exceed $$$5\,000$$$ and after every operation no variable can have an absolute value greater than $$$10^{18}$$$. William can perform actions of two types for two chosen variables with indices $$$i$$$ and $$$j$$$, where $$$i  \lt  j$$$:</p><ol> <li> Perform assignment $$$a_i = a_i + a_j$$$ </li><li> Perform assignment $$$a_j = a_j - a_i$$$ </li></ol> William wants you to develop a strategy that will get all the internal variables to the desired values.</div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 20$$$). Description of the test cases follows.</p><p>The first line of each test case contains a single <span class="tex-font-style-bf">even</span> integer $$$n$$$ ($$$2 \le n \le 10^3$$$), which is the number of internal variables.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ $$$(1 \le a_i \le 10^9)$$$, which are initial values of internal variables.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print the answer in the following format:</p><p>The first line of output must contain the total number of actions $$$k$$$, which the strategy will perform. Note that you do not have to minimize $$$k$$$. The inequality $$$k \le 5\,000$$$ must be satisfied. </p><p>Each of the next $$$k$$$ lines must contain actions formatted as "<span class="tex-font-style-tt">type i j</span>", where "<span class="tex-font-style-tt">type</span>" is equal to "<span class="tex-font-style-tt">1</span>" if the strategy needs to perform an assignment of the first type and "<span class="tex-font-style-tt">2</span>" if the strategy needs to perform an assignment of the second type. Note that $$$i  \lt  j$$$ should hold.</p><p>We can show that an answer always exists.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009963129982004941" id="id007927800391898367" class="input-output-copier">Copy</div></div><pre id="id009963129982004941">2
4
1 1 1 1
4
4 3 1 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00984623258202052" id="id0018209182833828474" class="input-output-copier">Copy</div></div><pre id="id00984623258202052">8
2 1 2
2 1 2
2 1 3
2 1 3
2 1 4
2 1 4
1 1 2
1 1 2
8
2 1 4
1 2 4
1 2 4
1 2 4
1 3 4
1 1 2
1 1 2
1 1 4
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the first sample test case one possible sequence of operations is as follows:</p><ol> <li> "<span class="tex-font-style-tt">2 1 2</span>". Values of variables after performing the operation: [1, <span class="tex-font-style-bf">0</span>, 1, 1] </li><li> "<span class="tex-font-style-tt">2 1 2</span>". Values of variables after performing the operation: [1, <span class="tex-font-style-bf">-1</span>, 1, 1] </li><li> "<span class="tex-font-style-tt">2 1 3</span>". Values of variables after performing the operation: [1, -1, <span class="tex-font-style-bf">0</span>, 1] </li><li> "<span class="tex-font-style-tt">2 1 3</span>". Values of variables after performing the operation: [1, -1, <span class="tex-font-style-bf">-1</span>, 1] </li><li> "<span class="tex-font-style-tt">2 1 4</span>". Values of variables after performing the operation: [1, -1, -1, <span class="tex-font-style-bf">0</span>] </li><li> "<span class="tex-font-style-tt">2 1 4</span>". Values of variables after performing the operation: [1, -1, -1, <span class="tex-font-style-bf">-1</span>] </li><li> "<span class="tex-font-style-tt">1 1 2</span>". Values of variables after performing the operation: [<span class="tex-font-style-bf">0</span>, -1, -1, -1] </li><li> "<span class="tex-font-style-tt">1 1 2</span>". Values of variables after performing the operation: [<span class="tex-font-style-bf">-1</span>, -1, -1, -1] </li></ol><p>For the second sample test case one possible sequence of operations is as follows:</p><ol> <li> "<span class="tex-font-style-tt">2 1 4</span>". Values of variables after performing the operation: [4, 3, 1, <span class="tex-font-style-bf">-2</span>] </li><li> "<span class="tex-font-style-tt">1 2 4</span>". Values of variables after performing the operation: [4, <span class="tex-font-style-bf">1</span>, 1, -2] </li><li> "<span class="tex-font-style-tt">1 2 4</span>". Values of variables after performing the operation: [4, <span class="tex-font-style-bf">-1</span>, 1, -2] </li><li> "<span class="tex-font-style-tt">1 2 4</span>". Values of variables after performing the operation: [4, <span class="tex-font-style-bf">-3</span>, 1, -2] </li><li> "<span class="tex-font-style-tt">1 3 4</span>". Values of variables after performing the operation: [4, -3, <span class="tex-font-style-bf">-1</span>, -2] </li><li> "<span class="tex-font-style-tt">1 1 2</span>". Values of variables after performing the operation: [<span class="tex-font-style-bf">1</span>, -3, -1, -2] </li><li> "<span class="tex-font-style-tt">1 1 2</span>". Values of variables after performing the operation: [<span class="tex-font-style-bf">-2</span>, -3, -1, -2] </li><li> "<span class="tex-font-style-tt">1 1 4</span>". Values of variables after performing the operation: [<span class="tex-font-style-bf">-4</span>, -3, -1, -2] </li></ol></div>