# Comparison Algorithms Metrics

## Compilation

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long comparison_algorithms.c -o comparison_algorithms`

## Run 1

```
Naive algorithm result: 625025000
Naive algorithm time: 0.666250 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000029 seconds
```

## Run 2

```
Naive algorithm result: 625025000
Naive algorithm time: 0.666655 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000029 seconds
```

## Run 3

```
Naive algorithm result: 625025000
Naive algorithm time: 0.667617 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000029 seconds
```

## Averages

| Implementation | Average execution time (seconds) |
|---|---|
| Naive (A) | 0.666841 |
| Single-pass (B) | 0.000029 |

## Relative Difference

Implementation A (naive) is ~22995 times slower than implementation B (single-pass).

## Observations

- The naive algorithm uses two nested loops, so it performs about n * (n + 1) / 2 checks (O(n^2)).
- The single-pass algorithm checks each element once, so it performs n checks (O(n)).
- The naive result (625025000) differs from the single-pass result (25000) because the inner loop re-counts the even numbers of every prefix of the array.
- The single-pass time is very small, so its measurement is less precise than the naive one.
- Longer runtime keeps the CPU busy longer, which generally means more energy used.
