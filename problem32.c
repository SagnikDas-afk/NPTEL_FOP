/*Write a C program to find the root of the equation using Newton Raphson method. f(x) = x ^ 3 - 2x - 3 The maximum number of steps are taken as input.*/


#include<stdio.h>
float f(float x);
float df (float x);

int main()
{
    int itr, maxmitr;
    float x0=1.0, x1;
    scanf("%d", &maxmitr);
    for (itr = 1; itr <= maxmitr; itr++) {
        // Newton-Raphson Formula
        x1 = x0 - (f(x0) / df(x0));
        
        // Update x0 for the next iteration
        x0 = x1;
    }

    // Output the final root
    printf("Root = %8.6f\n", x1);

    return 0;
}

// Function definition for f(x) = x^3 - 2x - 3
float f(float x) {
    return (x * x * x - 2 * x - 3);
}

// Derivative definition for f'(x) = 3x^2 - 2
float df(float x) {
    return (3 * x * x - 2);
}