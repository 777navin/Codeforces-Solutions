<h2><a href="https://codeforces.com/contest/1612/problem/A" target="_blank" rel="noopener noreferrer">1612A — Distance</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1612A](https://codeforces.com/contest/1612/problem/A) |

## Topics
`brute force` `constructive algorithms`

---

## Problem Statement

<div class="header"><div class="title">A. Distance</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's denote the Manhattan distance between two points $$$p_1$$$ (with coordinates $$$(x_1, y_1)$$$) and $$$p_2$$$ (with coordinates $$$(x_2, y_2)$$$) as $$$d(p_1, p_2) = |x_1 - x_2| + |y_1 - y_2|$$$. For example, the distance between two points with coordinates $$$(1, 3)$$$ and $$$(4, 2)$$$ is $$$|1 - 4| + |3 - 2| = 4$$$.</p><p>You are given two points, $$$A$$$ and $$$B$$$. The point $$$A$$$ has coordinates $$$(0, 0)$$$, the point $$$B$$$ has coordinates $$$(x, y)$$$.</p><p>Your goal is to find a point $$$C$$$ such that:</p><ul> <li> both coordinates of $$$C$$$ are non-negative integers; </li><li> $$$d(A, C) = \dfrac{d(A, B)}{2}$$$ (without any rounding); </li><li> $$$d(B, C) = \dfrac{d(A, B)}{2}$$$ (without any rounding). </li></ul><p>Find any point $$$C$$$ that meets these constraints, or report that no such point exists.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 3000$$$) — the number of test cases.</p><p>Each test case consists of one line containing two integers $$$x$$$ and $$$y$$$ ($$$0 \le x, y \le 50$$$) — the coordinates of the point $$$B$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the answer on a separate line as follows:</p><ul> <li> if it is impossible to find a point $$$C$$$ meeting the constraints, print "<span class="tex-font-style-tt">-1 -1</span>" (without quotes); </li><li> otherwise, print two non-negative integers not exceeding $$$10^6$$$ — the coordinates of point $$$C$$$ meeting the constraints. If there are multiple answers, print any of them. It can be shown that if any such point exists, it's possible to find a point with coordinates not exceeding $$$10^6$$$ that meets the constraints. </li></ul></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001015323655073227" id="id0004652384075164018" class="input-output-copier">Copy</div></div><pre id="id001015323655073227">10
49 3
2 50
13 0
0 41
42 0
0 36
13 37
42 16
42 13
0 0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0007454669900916067" id="id0026727958880169955" class="input-output-copier">Copy</div></div><pre id="id0007454669900916067">23 3
1 25
-1 -1
-1 -1
21 0
0 18
13 12
25 4
-1 -1
0 0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Explanations for some of the test cases from the example:</p><ul> <li> In the first test case, the point $$$B$$$ has coordinates $$$(49, 3)$$$. If the point $$$C$$$ has coordinates $$$(23, 3)$$$, then the distance from $$$A$$$ to $$$B$$$ is $$$|49 - 0| + |3 - 0| = 52$$$, the distance from $$$A$$$ to $$$C$$$ is $$$|23 - 0| + |3 - 0| = 26$$$, and the distance from $$$B$$$ to $$$C$$$ is $$$|23 - 49| + |3 - 3| = 26$$$. </li><li> In the second test case, the point $$$B$$$ has coordinates $$$(2, 50)$$$. If the point $$$C$$$ has coordinates $$$(1, 25)$$$, then the distance from $$$A$$$ to $$$B$$$ is $$$|2 - 0| + |50 - 0| = 52$$$, the distance from $$$A$$$ to $$$C$$$ is $$$|1 - 0| + |25 - 0| = 26$$$, and the distance from $$$B$$$ to $$$C$$$ is $$$|1 - 2| + |25 - 50| = 26$$$. </li><li> In the third and the fourth test cases, it can be shown that no point with integer coordinates meets the constraints. </li><li> In the fifth test case, the point $$$B$$$ has coordinates $$$(42, 0)$$$. If the point $$$C$$$ has coordinates $$$(21, 0)$$$, then the distance from $$$A$$$ to $$$B$$$ is $$$|42 - 0| + |0 - 0| = 42$$$, the distance from $$$A$$$ to $$$C$$$ is $$$|21 - 0| + |0 - 0| = 21$$$, and the distance from $$$B$$$ to $$$C$$$ is $$$|21 - 42| + |0 - 0| = 21$$$. </li></ul></div>