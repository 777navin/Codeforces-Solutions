<h2><a href="https://codeforces.com/contest/1001/problem/C" target="_blank" rel="noopener noreferrer">1001C — Generate GHZ state</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | Q# |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1001C](https://codeforces.com/contest/1001/problem/C) |

## Topics
`*special`

---

## Problem Statement

<div class="header"><div class="title">C. Generate GHZ state</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given <span class="tex-span"><i>N</i></span> qubits (<span class="tex-span">1 ≤ <i>N</i> ≤ 8</span>) in zero state <img align="middle" class="tex-formula" src="https://espresso.codeforces.com/8bb67080da7081bfb802ca6ecc5abc4f4c5ca190.png" style="max-width: 100.0%;max-height: 100.0%;">. Your task is to create Greenberger–Horne–Zeilinger (GHZ) state on them:</p><center class="tex-equation"><img align="middle" class="tex-formula" src="https://espresso.codeforces.com/acb08ce15c611d90dc85f731accccd9bbfac8fd3.png" style="max-width: 100.0%;max-height: 100.0%;"></center><p>Note that for <span class="tex-span"><i>N</i> = 1</span> and <span class="tex-span"><i>N</i> = 2</span> GHZ state becomes states <img align="middle" class="tex-formula" src="https://espresso.codeforces.com/891b1e75c93e44f237b7fde497062f8e85c1d952.png" style="max-width: 100.0%;max-height: 100.0%;"> and <img align="middle" class="tex-formula" src="https://espresso.codeforces.com/aec27febc80bfeb882cb96d33386f048ce011703.png" style="max-width: 100.0%;max-height: 100.0%;"> from the previous tasks, respectively.</p></div><div class="input-specification"><div class="section-title">Input</div><p>You have to implement an operation which takes an array of <span class="tex-span"><i>N</i></span> qubits as an input and has no output. The "output" of your solution is the state in which it left the input qubits.</p><p>Your code should have the following signature:</p><pre class="verbatim">namespace Solution {<br>    open Microsoft.Quantum.Primitive;<br>    open Microsoft.Quantum.Canon;<br><br>    operation Solve (qs : Qubit[]) : ()<br>    {<br>        body<br>        {<br>            // your code here<br>        }<br>    }<br>}</pre></div>