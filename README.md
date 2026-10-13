# Lab 2 — Максимальная сумма цифр в массиве (C)

[Русская версия](README.ru.md)

A small command-line C exercise. It generates an array of pseudo-random positive integers, calculates the sum of decimal digits for each value, and prints every number whose digit sum is maximal.

## Build

Requirements: a C compiler with C99 support (for example, GCC or Clang).

```bash
gcc -std=c99 -Wall -Wextra -Wpedantic src/main.c -o lab2-task1
```

## Run

Pass the desired array size as the only argument:

```bash
./lab2-task1 10
```

The program generates values from 1 to 1000. Because the array is generated randomly, the output changes between runs. The accepted size is from 1 to 1,000,000.

On Windows, run the executable produced by your configured C compiler. The command above is a GCC/Clang example.

## Algorithm

1. Generate the requested number of positive integers.
2. Compute the digit sum of every element.
3. Find the maximum digit sum.
4. Print all elements whose digit sum equals that maximum.

The source had duplicated conflict-marker sections from an unresolved Git merge; this version keeps a single implementation and validates the size argument before allocation.
