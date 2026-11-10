# Green Efficiency Analysis

The purpose of this report is to explain how algorithmic efficiency connects to runtime and energy use. 

## Measurement Methodology
Execution time was measured using clock() and converted to seconds using CLOCKS_PER_SEC. 
Execution time was measured three times, and the average was recorded. 

### Task 1 - Baseline
Measured the CPU time required for 100 million iterations. 

### Task 2 - Algorithmic Efficiency Comparison
Compared the execution time between two algorithms on a dataset of 50,000 elements: (1) a nested-loop and (2) a singple-pass algorithm. 

### Task 3 - Controlled Instrumentation Experiment
Compared the execution time when building, processing and reducing a data set of 50,000 elements. 

## Observed Performance Differences

### Task 1 - Baseline

| Measurement | Result |
| ---| ---|
| Iterations | 100,000,000 |
| Execution Time (s) | 0.00086 |

Observation: This is the baseline for the CPU after running a large workload. 

### Task 2 -  Algorithmic Efficiency Comparison

| Measurement | Naive | Single-pass |
| ---| ---|---|
| Loops | 2 | 1 |
| Array size | 50,000 | 50,000 |
| Execution time (s) | 2.20075 | 0.00009 |
| Result | 625,025,000 | 25,000 |

Observation: Despite having the same array size, and number of loops, single-pass was X times faster than naive. 

### Task 3 - Controlled Instrumentation Experiment

| Measurement | Build | Process | Reduce | 
| ---| ---| --- | --- |
| Dataset | 50,000 | 50,000 | 50,000 |
| Execution time (s) | 0.00050 | 0.00027 | 0.00019 |

Observation: Despite having the same array size, BUILD was X times longer than PROCESS and REDUCE.  

## Relation Between Runtime and Energy Consumption

## Limitations of the Experiment

## Practical Engineering Takeaway
