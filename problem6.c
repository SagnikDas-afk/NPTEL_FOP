/*The length of three sides are taken as input. Write a C program to find whether a triangle can be formed or not. If not display “This Triangle is NOT possible.” If the triangle can be formed then check whether the triangle formed is equilateral, isosceles, scalene or a right-angled triangle. (If it is a right-angled triangle then only print Right-angle triangle do not print it as Scalene Triangle).*/
#include<stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d %d %d",&a, &b, &c);
 if ((a + b > c) && (a + c > b) && (b + c > a)) 
    {
        if (a == b && b == c) 
        {
            printf("Equilateral Triangle");
        }

        else if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)) 
        {
            printf("Right-angle Triangle");
        }

        else if (a == b || b == c || a == c) 
        {
            printf("Isosceles Triangle");
        }

        else 
        {
            printf("Scalene Triangle");
        }
    } 
    else 
    {
        printf("Triangle is not possible");
    }

    return 0;
}