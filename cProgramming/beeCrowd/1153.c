/*
Factorial of N = N * (N-1) * (N-2) * (N-3) * ... * 1.

Example:
Factorial(5)=5*4*3*2*1=120

*/
#include <stdio.h> // Include the standard input/output library.

int main() { // Define the main 
    int N, i, factorial = 1; // Declare integer variables N, i, and factorial, and initialize factorial to 1.

    scanf("%d", &N); // Read an integer value into the variable N.

    for (i = N; i >= 1; i--) { // Start a for loop with i initialized to N and iterates as long as i is greater than or equal to 1, decrementing i in each iteration.
        factorial = factorial * i; // Calculate the factorial by multiplying the current value of factorial by i.
    }

    printf("%d\n", factorial); // Print the final factorial value.

    return 0; // Return 0 to indicate successful program execution.
}