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

| Run | Execution time (s) |
| ---| ---|
| 1 | 0.122929 |
| 2 | 0.124604|
| 3 | 0.125871 |
| Avg | 0.124468 |

Observation: This is the baseline for the CPU after running a large workload. 

### Task 2 -  Algorithmic Efficiency Comparison

| Measurement | Naive | Single-pass |
| ---| ---|---|
| Loops | 2 | 1 |
| Array size | 50,000 | 50,000 |
| Execution time (s) | 2.20075 | 0.00009 |
| Result | 625,025,000 | 25,000 |

Observation: Both algorithms processed an array of 50,000 elements. However, the naive algorithm took approximately 25,296 times longer than the single-pass. Its nested loops repeated examined the same elements, while the single-pass algorithm examined each element once. The algorithms produced different results, limiting their direct comparison.   

### Task 3 - Controlled Instrumentation Experiment

| Measurement | Build | Process | Reduce | 
| ---| ---| --- | --- |
| Dataset | 50,000 | 50,000 | 50,000 |
| Execution time (s) | 0.000507 | 0.000274 | 0.000192 |

Observation: All three operations involved a dataset of 50,000 elements. However, their measured execution times differed. BUILD took the longest at 0.000507 seconds, accounting for 52% of the total measured CPU time. It took 1.85 times as long as PROCESS and 2.64 times as long as REDUCE.

## Relation Between Runtime and Energy Consumption

Runtime and energy consumption are related because computers require electrical power to perform calculations. Programs that perform unecessary computations may keep the CPU active for longer, which increases energy consumption.


## Limitations of the Experiment

Shorter CPU execution time does not necessarily mean lower energy consumption, because power usage varies depending on workload and hardware.

Furthermore, this task did not measure real power draw in watts, making any conclusions regarding energy consumption speculative. It is only assumed that longer runtime leads to longer CPU activity which increases energy consumption. 

## Practical Engineering Takeaway
