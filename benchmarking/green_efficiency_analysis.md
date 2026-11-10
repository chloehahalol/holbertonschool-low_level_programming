# Green Efficiency Analysis

The purpose of this report is to explain how algorithmic efficiency connects to runtime and energy use. 

## Measurement Methodology
Execution time was measured using clock() and converted to seconds using CLOCKS_PER_SEC. 

For each task, execution time was measured three times and the average was recorded. 

### Task 1 - Baseline
To establish a baseline, CPU time required for 100 million iterations was measured. 

### Task 2 - Algorithmic Efficiency Comparison
On a dataset of 50,000 elements, two algorithms were used to count the number of even numbers.
(1) A naive loop
(2) A single-pass

The CPU time and number of loops required to execute this task was measured.

### Task 3 - Controlled Instrumentation Experiment
On a dataset of 50,000 elements, the CPU time to build, process and reduce the data set was measured.

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

Observation: Both algorithms processed an array of 50,000 elements. However, the naive algorithm took approximately 25,296 times longer than the single-pass. Its nested loops repeatededly examined the same elements, while the single-pass algorithm examined each element once. 

### Task 3 - Controlled Instrumentation Experiment

| Measurement | Build | Process | Reduce | 
| ---| ---| --- | --- |
| Dataset | 50,000 | 50,000 | 50,000 |
| Execution time (s) | 0.000507 | 0.000274 | 0.000192 |

Observation: All three operations involved a dataset of 50,000 elements. However, their measured execution times differed. BUILD took the longest at 0.000507 seconds, accounting for 52% of the total measured CPU time. It took 1.85 times as long as PROCESS and 2.64 times as long as REDUCE.

## Relation Between Runtime and Energy Consumption

Runtime and energy consumption are related because computers require electrical power to perform calculations. Programs that perform unecessary computations will require more CPU time and therefore may increase energy consumption.

In Task 2, two algorithms were compared to understand algorithmic efficiency. Despite processing the same sized array, the naive algorithm took  25,296 times longer to execute than the single-pass. Since the naive algorithm used two loops, it performed 1,250,025,000 inner-loop iterations, compared to the 50,000 iterations performed by the single-pass. 

Here, the design of the naive algorithm led to more iterations and longer CPU runtime. These results illustrate that repeated processing of the same elements can increase CPU runtime, highlighting the importance of algorithmic efficiency.

Task 3 revealed similar results, where the same dataset was processed however differing operations lead to different CPU run times.

These results demonstrate that algorithm design can significantly influence CPU runtime. By reducing redundant computations, software engineers may also reduce the energy required to execut programs. 

## Limitations of the Experiment

Shorter CPU execution time does not necessarily mean lower energy consumption, because power usage varies depending on workload and hardware. This experiment measured the CPU time rather than electrical power consumption. As a result, actual energy savings cannot be determined. 

## Practical Engineering Takeaway

For software engineers, efficient algorithm design can reduce unnecessary CPU work and potentially lower energy cosumption.
