//Write a program to find the factorial of a given number using while loop.
#include<stdio.h>
void main()
{
    int n;
    long int fact;
    scanf("%d",&n);
	int temp = n;
    while (n > 1) 
    {
        fact = fact * n;
        n = n - 1;
    }

    printf("The Factorial of %d is : %ld", temp, fact);
}