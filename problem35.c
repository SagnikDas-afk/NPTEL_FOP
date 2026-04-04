#include<stdio.h>
float func(float x,float y);
int main()
{
    float m1,m2,m3,m4,m,h=0.3;
    float x0 = 0.3, y0 = 5, xn;
    scanf("%f",&xn);  // xn will be taken from test cases
    float k1, k2, k3, k4; // Using k to represent slopes (m in your code)

    while (x0 < xn - 0.0001) // Small epsilon to avoid precision-based loop skips
    {
        k1 = h * func(x0, y0);
        k2 = h * func(x0 + h/2.0, y0 + k1/2.0);
        k3 = h * func(x0 + h/2.0, y0 + k2/2.0);
        k4 = h * func(x0 + h, y0 + k3);
        
        y0 = y0 + (k1 + 2*k2 + 2*k3 + k4) / 6.0;
        x0 = x0 + h;
    }

    printf("y=%.4f", y0);

    return 0;
}

float func(float x, float y)
{
    // 10 dy/dx = x(x+1) - 3y^3  => dy/dx = (x^2 + x - 3y^3) / 10
    return (x * (x + 1) - 3 * y * y * y) / 10.0;
}
