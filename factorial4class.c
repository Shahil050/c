#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;

    // take input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // check if the input is valid
    if (n <= 0) {
        printf("Invalid input! Please enter a positive integer.");
    }
    else {
        // print the nth term of the Fibonacci series
        printf("The %d term of the Fibonacci series is %d", n, fibonacci(n));
    }

    return 0;
}




