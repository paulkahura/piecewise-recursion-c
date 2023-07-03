# piecewise-recursion-c

W7e are going to be using the recursive method, memoization and the iterative method.
To run the files we are just going to compile the files using gcc.
For example for the  iterative approach run gcc iterative.c -o iterative. Then run ./iterative.c.

Recursive approach is simple to understandbut inefficient for large values of n since there will be redundant calls. Iterative is most suitable for larger values of n but its implementation is more complex than that of recursive.


The best solution is to use memoization. Memoization effectively converts the recursive approach into a more efficient dynamic programming-like solution by storing and reusing computed results. It helps to eliminate redundant function calls and reduces the time complexity to linear (O(n)) for subsequent recursive calls.

