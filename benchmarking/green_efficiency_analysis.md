# Green Efficiency Analysis

## Measurement Methodology

The experiments were conducted using the same computing
environment to maintain consistency between measurements.
All C programs were compiled using GCC with the flags
-Wall, -Werror, -Wextra, -pedantic, -std=gnu89, and
-Wno-long-long.

The clock() function from the standard C library was
used to measure CPU execution time. The difference
between the ending and starting clock values was
divided by CLOCKS_PER_SEC to obtain the elapsed CPU
time in seconds.

The baseline program executed 100 million iterations
and was measured three consecutive times. The algorithm
comparison was also executed three times, and the
average execution time was calculated for each
implementation. The instrumentation experiment measured
the dataset-building, processing, and checksum-reduction
phases separately, as well as their combined execution
time. Output printing was excluded from the measured
computation.

## Observed Performance Differences

The baseline experiment produced execution times of
0.073547, 0.076933, and 0.074569 seconds, with an
average of 0.075016 seconds. These results demonstrate
that repeated executions of the same program can
produce slightly different measurements.

The naive algorithm had an average execution time
of approximately 0.956795 seconds, while the
single-pass algorithm consistently recorded
0.000032 seconds. The naive implementation therefore
took approximately 29,900 times as long as the
single-pass implementation.

The naive algorithm has quadratic time complexity,
O(n^2), because it repeatedly traverses portions of
the dataset using nested loops. The single-pass
algorithm has linear time complexity, O(n), because
it traverses the dataset only once.

The instrumentation experiment recorded a total
execution time of 0.000520 seconds. Dataset building
required 0.000236 seconds, processing required
0.000200 seconds, and checksum reduction required
0.000084 seconds. Dataset building represented
approximately 45.38 percent of the total measured
CPU time, making it the most time-consuming phase
in this particular execution.

## Relation Between Runtime and Energy Consumption

Software efficiency can influence energy consumption
because computational operations require hardware
resources and electrical power. An algorithm that
performs fewer unnecessary operations may reduce CPU
activity and the time required to complete a workload.

Energy consumption depends on both power and time.
If average power consumption remains comparable,
reducing execution time can reduce the energy required
to complete a computation.

However, execution time alone does not provide a
direct measurement of energy consumption. Processor
frequency, memory activity, hardware architecture,
and power management can influence actual energy use.
The measurements in these experiments should therefore
be considered indicators of computational efficiency,
rather than direct measurements of electrical energy
or carbon emissions.

## Limitations of the Experiment

The experiments measured CPU time rather than actual
power consumption or total wall-clock execution time.
No hardware energy measurement tools were used.

The measurements were collected in one computing
environment using fixed dataset sizes. Consequently,
the results cannot be generalized to every hardware
configuration or workload. Short execution times are
also sensitive to timer resolution and instrumentation
overhead.

Another important limitation is that the naive and
single-pass algorithms produce different results.
The naive implementation returns 625025000 because
it repeatedly counts previously visited even elements,
whereas the single-pass implementation returns 25000.
Therefore, their runtime difference demonstrates the
cost of different computational workloads rather
than an optimization between functionally equivalent
implementations.

## Practical Engineering Takeaway

Developers should consider algorithmic complexity
when designing software and avoid unnecessary
computational operations whenever possible. Performance
instrumentation can help identify expensive sections
of a program before optimization efforts begin.

However, optimizations must preserve program correctness.
Performance comparisons should ideally involve
functionally equivalent implementations, consistent
measurement conditions, and repeated experiments.

Efficient software can contribute to more sustainable
computing by reducing unnecessary resource usage.
Nevertheless, reliable conclusions about energy
consumption require direct energy measurements in
addition to execution-time benchmarks.

