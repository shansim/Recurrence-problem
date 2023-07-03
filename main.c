#include <stdio.h>

// Recursive approach to calculate the sequence
int recursiveSequence(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return recursiveSequence(n - 3) + recursiveSequence(n - 2);
}

// Iterative approach to calculate the sequence
int iterativeSequence(int n) {
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    int fn_minus_3 = 0;
    int fn_minus_2 = 1;
    int fn_minus_1 = 2;
    int fn = 0;

    for (int i = 3; i <= n; i++) {
        fn = fn_minus_3 + fn_minus_2;
        fn_minus_3 = fn_minus_2;
        fn_minus_2 = fn_minus_1;
        fn_minus_1 = fn;
    }

    return fn;
}

// Memoized approach to calculate the sequence
int memoizedSequence(int n, int* memo) {
    if (memo[n] != -1)
        return memo[n];

    if (n == 0)
        memo[n] = 0;
    else if (n == 1)
        memo[n] = 1;
    else if (n == 2)
        memo[n] = 2;
    else
        memo[n] = memoizedSequence(n - 3, memo) + memoizedSequence(n - 2, memo);

    return memo[n];
}

int main() {
    int n;
    printf("Enter the value of n to find its sequence: ");
    scanf("%d", &n);
    int memo[100];
    int i;
    for (i = 0; i < 100; i++)
        memo[i] = -1;

    // Calculate the sequence using the recursive approach
    int recursiveResult = recursiveSequence(n);
    
    // Calculate the sequence using the iterative approach
    int iterativeResult = iterativeSequence(n);
    
    // Calculate the sequence using the memoized approach
    int memoizedResult = memoizedSequence(n, memo);

    // Print the results
    printf("Recursive F(%d) = %d\n", n, recursiveResult);
    printf("Iterative F(%d) = %d\n", n, iterativeResult);
    printf("Memoized F(%d) = %d\n", n, memoizedResult);

    return 0;
}