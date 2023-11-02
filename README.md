# TestAbility

C++

## Objective
Structural simulation of standard combinational circuits (ISCAS) at the gate level, and Detection of Stuck at Faults using Deductive Fault Simulation Method.

## Intro
High-level ISCAS models include circuits that are used for research purposes. These circuits, including simple benchmark circuits, are easily accessible. Digital designers typically move from behavioral description towards drawing the logical circuit. They rarely move in the opposite direction. Experienced engineers present their methods and experiences in reverse engineering ISCAS-85 benchmark circuits. They also discuss the practical use of results from a small number of benchmark circuits and make these circuits available to other researchers. The models in this standard are divided into three levels, which are: <br>
+ Gate level
+ Structural level
+ Behavioral level
<br>
These high-level and gate-level models are part of a hierarchical circuit set that has been tested for some research tools in digital design, such as test generation and timing analysis. The codes related to the standard benchmark circuits ISCAS are written in the Verilog language and at the structural level. Structural models are considered for describing the high-level structure that is implicitly present in gate-level designs. In most cases, Verilog behavioral models, which define high-level blocks in terms of logical equations, can easily be synthesized into gates.
