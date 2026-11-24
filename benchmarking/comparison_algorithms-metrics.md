# Algorithmic Efficiency Comparison

## Run 1

Naive algorithm result: 625025000
Naive algorithm time: 0.960983 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000032 seconds

## Run 2

Naive algorithm result: 625025000
Naive algorithm time: 0.953313 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000032 seconds

## Run 3

Naive algorithm result: 625025000
Naive algorithm time: 0.956090 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000032 seconds

## Average Execution Times

Naive algorithm:
(0.960983 + 0.953313 + 0.956090) / 3
= 0.956795 seconds

Single-pass algorithm:
(0.000032 + 0.000032 + 0.000032) / 3
= 0.000032 seconds

## Relative Difference

0.956795 / 0.000032 = approximately 29899.84

The naive algorithm took approximately 29,900 times
as long as the single-pass algorithm.

## Observations

The naive algorithm uses nested loops with O(n^2)
time complexity, while the single-pass algorithm
uses one loop with O(n) time complexity.

The two implementations return different results
because the naive algorithm repeatedly counts
previously visited elements. Therefore, the measured
runtime difference does not represent a comparison
between functionally equivalent implementations.

