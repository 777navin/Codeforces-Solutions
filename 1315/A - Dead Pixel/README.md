<h2><a href="https://codeforces.com/contest/1315/problem/A" target="_blank" rel="noopener noreferrer">1315A — Dead Pixel</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1315A](https://codeforces.com/contest/1315/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Dead Pixel</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Screen resolution of Polycarp's monitor is $$$a \times b$$$ pixels. Unfortunately, there is one dead pixel at his screen. It has coordinates $$$(x, y)$$$ ($$$0 \le x  \lt  a, 0 \le y  \lt  b$$$). You can consider columns of pixels to be numbered from $$$0$$$ to $$$a-1$$$, and rows — from $$$0$$$ to $$$b-1$$$.</p><p>Polycarp wants to open a rectangular window of maximal size, which doesn't contain the dead pixel. The boundaries of the window should be parallel to the sides of the screen.</p><p>Print the maximal area (in pixels) of a window that doesn't contain the dead pixel inside itself.</p></div><div class="input-specification"><div class="section-title">Input</div><p>In the first line you are given an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases in the test. In the next lines you are given descriptions of $$$t$$$ test cases.</p><p>Each test case contains a single line which consists of $$$4$$$ integers $$$a, b, x$$$ and $$$y$$$ ($$$1 \le a, b \le 10^4$$$; $$$0 \le x  \lt  a$$$; $$$0 \le y  \lt  b$$$) — the resolution of the screen and the coordinates of a dead pixel. It is guaranteed that $$$a+b \gt 2$$$ (e.g. $$$a=b=1$$$ is impossible).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ integers — the answers for each test case. Each answer should contain an integer equal to the maximal possible area (in pixels) of a rectangular window, that doesn't contain the dead pixel.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006648643870846357" id="id00014779721774686005" class="input-output-copier">Copy</div></div><pre id="id006648643870846357">6
8 8 0 0
1 10 0 3
17 31 10 4
2 1 0 0
5 10 3 9
10 10 4 8
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006659698272930696" id="id009332086168653636" class="input-output-copier">Copy</div></div><pre id="id006659698272930696">56
6
442
1
45
80
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the screen resolution is $$$8 \times 8$$$, and the upper left pixel is a dead pixel. Here you can see one of two possible layouts of the maximal window.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/d8ebf0183d696d6f64fbff3f047e7117749ea470.png" style="zoom: 75.0%;max-width: 100.0%;max-height: 100.0%;"> </center></div>