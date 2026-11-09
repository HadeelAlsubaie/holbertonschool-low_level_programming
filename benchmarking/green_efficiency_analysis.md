# Green Efficiency Analysis

## Measurement Methodology

All programs were compiled with the same strict command: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long. Every measurement was taken on the same sandbox machine, one run after another, with no other work started in between. Timing used clock() from time.h, which measures processor time used by the program, and the difference between two clock() readings was divided by CLOCKS_PER_SEC to get seconds.

Each program was executed three times, and the full outputs were saved in baseline_loop-metrics.md and comparison_algorithms-metrics.md. Averages were computed from those three runs instead of trusting a single value. For instrumentation_lab.c, four checkpoints were placed in main: one before build_dataset(), one after it, one after process_dataset(), and one after reduce_checksum(). Each phase is measured from one checkpoint to the next, so there are no gaps and no overlaps, and TOTAL covers exactly the three phases. The printf calls and the checksum check were kept outside the measured region, because printing is slow and is not part of the work being measured.

## Observed Performance Differences

The baseline loop (100000000 iterations) took 0.198358, 0.198515 and 0.198491 seconds, with an average of 0.198455 seconds. The program is deterministic, yet the times were not identical: the gap between the fastest and slowest run was about 0.1% of the average. This shows that a single run is not a reliable measurement.

In comparison_algorithms.c, the naive algorithm took between 0.666250 and 0.667617 seconds, with an average of 0.666841 seconds. The single-pass algorithm averaged 0.000029 seconds. Based on these averages, the naive implementation is about 22995 times slower than the single-pass implementation. This matches the structure of the code: the naive version uses two nested loops, so it checks about n * (n + 1) / 2 elements (O(n^2)), while the single-pass version checks each of the 50000 elements once (O(n)). The two functions also returned different values (625025000 and 25000), because the naive inner loop counts the same even numbers again for every prefix of the array.

In instrumentation_lab.c, the average TOTAL over three runs was 0.000336 seconds. BUILD_DATA averaged 0.000137 seconds, PROCESS averaged 0.000134 seconds and REDUCE averaged 0.000065 seconds. In every run, TOTAL was greater than or equal to each phase.

## Relation Between Runtime and Energy Consumption

This project did not measure power in watts. Runtime was used as a proxy: while a program runs, it keeps the CPU busy, and a busy CPU draws more power than an idle one. Under that assumption, the naive algorithm, which kept the CPU busy about 22995 times longer than the single-pass algorithm for the same input, would also be expected to use more energy. The difference for one run is small, but the same code executed many times on many machines multiplies that cost.

## Limitations of the Experiment

- Only three runs were recorded per program, which is a small sample.
- The tests ran in a shared sandbox, so other processes may have affected the times, as the variation in the baseline runs shows.
- clock() has limited precision. The single-pass and instrumentation phases ran in fractions of a millisecond, so their values are much less precise than the naive measurement.
- Runtime is only a proxy. No real energy or power data was collected.

## Practical Engineering Takeaway

The measurements show that the choice of algorithm had a much larger effect than run-to-run noise: the variation between baseline runs was about 0.1%, while the gap between the two counting algorithms was about 22995 times. Before trying small optimizations, an engineer should first check the algorithm's complexity. Claims about speed should always be backed by repeated measurements under the same conditions, using averages and clearly defined measurement boundaries.
