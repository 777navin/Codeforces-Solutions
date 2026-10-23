<h2><a href="https://codeforces.com/contest/1658/problem/B" target="_blank" rel="noopener noreferrer">1658B — Marin and Anti-coprime Permutation</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1658B](https://codeforces.com/contest/1658/problem/B) |

## Topics
`combinatorics` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Marin and Anti-coprime Permutation</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Marin wants you to count number of permutations that are <span class="tex-font-style-it">beautiful</span>. A <span class="tex-font-style-it">beautiful</span> permutation of length $$$n$$$ is a permutation that has the following property: $$$$$$ \gcd (1 \cdot p_1, \, 2 \cdot p_2, \, \dots, \, n \cdot p_n)  \gt  1, $$$$$$ where $$$\gcd$$$ is the <a href="https://en.wikipedia.org/wiki/Greatest_common_divisor">greatest common divisor</a>.</p><p>A permutation is an array consisting of $$$n$$$ distinct integers from $$$1$$$ to $$$n$$$ in arbitrary order. For example, $$$[2,3,1,5,4]$$$ is a permutation, but $$$[1,2,2]$$$ is not a permutation ($$$2$$$ appears twice in the array) and $$$[1,3, 4]$$$ is also not a permutation ($$$n=3$$$ but there is $$$4$$$ in the array).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^3$$$) — the number of test cases.</p><p>Each test case consists of one line containing one integer $$$n$$$ ($$$1 \le n \le 10^3$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — number of <span class="tex-font-style-it">beautiful</span> permutations. Because the answer can be very big, please print the answer modulo $$$998\,244\,353$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0013168102695680217" id="id005184792488565912" class="input-output-copier">Copy</div></div><pre data-content="7
1
2
3
4
5
6
1000
" id="id0013168102695680217"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-odd test-example-line-3">3</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-odd test-example-line-5">5</div><div class="test-example-line test-example-line-even test-example-line-6">6</div><div class="test-example-line test-example-line-odd test-example-line-7">1000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008375453291170428" id="id006501307973783281" class="input-output-copier">Copy</div></div><pre id="id008375453291170428">0
1
0
4
0
36
665702330
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In first test case, we only have one permutation which is $$$[1]$$$ but it is not beautiful because $$$\gcd(1 \cdot 1) = 1$$$.</p><p>In second test case, we only have one beautiful permutation which is $$$[2, 1]$$$ because $$$\gcd(1 \cdot 2, 2 \cdot 1) = 2$$$. </p></div>