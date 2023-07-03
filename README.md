# Recurrence Relation Sequence Calculation

This program calculates a sequence based on a piecewise recurrence relation. It provides three different implementations: recursive, iterative, and memoized approaches.

## Development Environment

- Language: C
- IDE: Visual Studio Code

## How to Compile and Run

1. Make sure you have the GCC compiler installed on your system.

2. Open the project folder in Visual Studio Code.

3. Open the terminal in Visual Studio Code (Terminal -> New Terminal).

4. To compile the source code, use the following command:

   ```bash
   gcc -o sequence sequence.c```

5. To run the program, use the following command:
   
   ```./sequence```

## Functionality of the Code
The code defines three functions: `recursiveSequence`, `iterativeSequence`, and `memoizedSequence`, to calculate a sequence based on the provided recurrence relation.

- `recursiveSequence` uses a recursive approach to calculate the sequence.
- `iterativeSequence` uses an iterative approach to calculate the sequence.
- `memoizedSequence` uses memoization to store and reuse calculated values, improving performance.

In the `main` function, the code prompts the user to enter the value of `n`. It then initializes an array `memo` with -1 values. The code calls each of the three functions to calculate the sequence for `n` and prints the results using `printf`.

The output will display the calculated values for the recursive, iterative, and memoized approaches.
