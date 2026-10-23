<h2><a href="https://codeforces.com/contest/1101/problem/E" target="_blank" rel="noopener noreferrer">1101E — Polycarp's New Job</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1101E](https://codeforces.com/contest/1101/problem/E) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">E. Polycarp's New Job</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp has recently got himself a new job. He now earns so much that his old wallet can't even store all the money he has.</p><p>Berland bills somehow come in lots of different sizes. However, all of them are shaped as rectangles (possibly squares). All wallets are also produced in form of rectangles (possibly squares).</p><p>A bill $$$x \times y$$$ fits into some wallet $$$h \times w$$$ if either $$$x \le h$$$ and $$$y \le w$$$ or $$$y \le h$$$ and $$$x \le w$$$. Bills can overlap with each other in a wallet and an infinite amount of bills can fit into a wallet. That implies that all the bills Polycarp currently have fit into a wallet if every single one of them fits into it independently of the others.</p><p>Now you are asked to perform the queries of two types:</p><ol> <li> $$$+~x~y$$$ — Polycarp earns a bill of size $$$x \times y$$$; </li><li> $$$?~h~w$$$ — Polycarp wants to check if all the bills he has earned to this moment fit into a wallet of size $$$h \times w$$$. </li></ol><p>It is guaranteed that there is at least one query of type $$$1$$$ before the first query of type $$$2$$$ and that there is at least one query of type $$$2$$$ in the input data.</p><p>For each query of type $$$2$$$ print "<span class="tex-font-style-tt">YES</span>" if all the bills he has earned to this moment fit into a wallet of given size. Print "<span class="tex-font-style-tt">NO</span>" otherwise.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$2 \le n \le 5 \cdot 10^5$$$) — the number of queries.</p><p>Each of the next $$$n$$$ lines contains a query of one of these two types:</p><ol> <li> $$$+~x~y$$$ ($$$1 \le x, y \le 10^9$$$) — Polycarp earns a bill of size $$$x \times y$$$; </li><li> $$$?~h~w$$$ ($$$1 \le h, w \le 10^9$$$) — Polycarp wants to check if all the bills he has earned to this moment fit into a wallet of size $$$h \times w$$$. </li></ol><p>It is guaranteed that there is at least one query of type $$$1$$$ before the first query of type $$$2$$$ and that there is at least one query of type $$$2$$$ in the input data.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each query of type $$$2$$$ print "<span class="tex-font-style-tt">YES</span>" if all the bills he has earned to this moment fit into a wallet of given size. Print "<span class="tex-font-style-tt">NO</span>" otherwise.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0010386995269978982" id="id0028077697340356245" class="input-output-copier">Copy</div></div><pre id="id0010386995269978982">9
+ 3 2
+ 2 3
? 1 20
? 3 3
? 2 3
+ 1 5
? 10 10
? 1 5
+ 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005472822567458406" id="id0023596072947554458" class="input-output-copier">Copy</div></div><pre id="id005472822567458406">NO
YES
YES
YES
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The queries of type $$$2$$$ of the example:</p><ol> <li> Neither bill fits; </li><li> Both bills fit (just checking that you got that bills can overlap); </li><li> Both bills fit (both bills are actually the same); </li><li> All bills fit (too much of free space in a wallet is not a problem); </li><li> Only bill $$$1 \times 5$$$ fit (all the others don't, thus it's "<span class="tex-font-style-tt">NO</span>"). </li></ol></div>