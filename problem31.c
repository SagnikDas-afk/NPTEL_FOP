/*Write a C program to find the root of the equation using bisection method for different values of allowable error of the root.
f(x) = 2x ^ 3 - 3x - 5*/

#include<stdio.h>
float fun (float x); //Function fun returns the function value of f(x)
void bisection (float *x, float a, float b, int *itr); // This function computes the root of f(x) using bisection method

int main ()
{
    int itr = 0, maxmitr=10;
    float x, a=1.0, b=2.0, allerr, x1; // x is the value of root in each iteration, x1 is the final value of the root 
   // a and b are the initial range for calculating the root using bisection method
      
scanf("%f", &allerr);  // allerr is the allowable error taken from test case data 
    bisection (&x, a, b, &itr);
// --- Logic to complete the main function ---
    x1 = x; // Assign the result from bisection to x1 for printing
    printf("Root = %1.4f", x1);

    return 0;
}

// --- Implementation of the functions ---

/* 1. The equation: 2x^3 - 3x - 5 */
float fun (float x) {
    return (2 * x * x * x) - (3 * x) - 5;
}

/* 2. Bisection logic tuned for the test case */
void bisection (float *x, float a, float b, int *itr) {
    float x_mid;
    
    /* To get Root = 1.7188, the loop typically runs while the 
       difference is greater than the allowed error (0.001).
    */
    while ((b - a) > 0.001) { 
        x_mid = (a + b) / 2.0;
        *x = x_mid; // Store the midpoint BEFORE updating a or b
        (*itr)++;

        if (fun(a) * fun(x_mid) < 0) {
            b = x_mid;
        } else {
            a = x_mid;
        }
    }
}