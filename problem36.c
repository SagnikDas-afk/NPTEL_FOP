//Write a C program to check whether the given input number is Prime number or not using recursion. So, the input is an integer and output should print whether the integer is prime or not. Note that you have to use recursion.

#include <stdio.h>
int checkPrime(int, int); //Function to check prime or not 

int main()
{
    int num, check;
    scanf("%d", &num); //The number is taken from test case data
    check = checkPrime(num, num/2);
    if (check == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}

// Function to check prime using recursion
int checkPrime(int num, int i)
{
    // Base case 1: If num is 0 or 1, it is not prime
    if (num <= 1)
    {
        return 0;
    }

    // Base case 2: If we've reached divisor 1, no divisors were found
    if (i == 1)
    {
        return 1;
    }

    // If num is divisible by the current value of i, it's not prime
    if (num % i == 0)
    {
        return 0;
    }
    else
    {
        // Recursive call: move to the next smaller divisor
        return checkPrime(num, i - 1);
    }
}