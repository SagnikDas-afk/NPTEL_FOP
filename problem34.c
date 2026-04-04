#include<stdio.h>
float func(float x);
int main()
{
  int n=10; //Taking n=10 sub intervals
  float a,b,integral; //integral is the integration result
  scanf("%f",&a); // initial limit taken from test case 
  scanf("%f",&b); // Final limit taken from test case

//Use the printf statement as printf("The integral is: %0.6f\n",integral);
float h, x_val;
  int i;

  // 1. Calculate the width of each segment
  h = (b - a) / n;

  // 2. Start with the first and last terms: f(a) + f(b)
  integral = func(a) + func(b);

  // 3. Add the middle terms: 2 * f(x_i)
  for (i = 1; i < n; i++) {
    x_val = a + i * h;
    integral += 2 * func(x_val);
  }

  // 4. Multiply by h/2
  integral = (h / 2) * integral;

  printf("The integral is: %0.6f\n", integral);

  return 0;
}

// Function to calculate f(x) = x^2
float func(float x) {
  return x * x;
}