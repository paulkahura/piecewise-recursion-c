#include <stdio.h>
#define MAX_N 100

int fibonacci_memoization(int n, int* cache) {
    if (n == 0)
        return 0;
    else if (n == 1 || n == 2)
        return 1;

    if (cache[n] != -1)
        return cache[n];

    int result = fibonacci_memoization(n - 3, cache) + fibonacci_memoization(n - 2, cache);
    cache[n] = result;
    return result;
}

int fibonacci(int n) {
    int cache[MAX_N];
    for (int i = 0; i < MAX_N; i++)
        cache[i] = -1;

    return fibonacci_memoization(n, cache);
}


int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci number at position %d is %d\n", n, fibonacci(n));

    return 0;
}