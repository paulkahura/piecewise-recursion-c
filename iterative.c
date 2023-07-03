#include <stdio.h>

int fibonacci_iterative(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    int a = 0, b = 1, c = 2;
    for (int i = 3; i <= n; i++) {
        int temp = c;
        c = a + b;
        a = b;
        b = temp;
    }

    return c;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci number at position %d is %d\n", n, fibonacci(n));

    return 0;
}
