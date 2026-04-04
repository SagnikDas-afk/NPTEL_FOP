#include<stdio.h>
int main()
{
  float t[100]={10,15,18,22,30}, v[100]={22,26,35,48,68};
  float a; //Value of the t to find the respective value of v(t)
  scanf("%f", &a);  // This will be taken from test cases
  float k = 0; // Define 'k' here to store the result
  int n = 5;   // Total number of points in your array

  for (int i = 0; i < n; i++) {
    float term = v[i];
    for (int j = 0; j < n; j++) {
      if (i != j) {
        term = term * (a - t[j]) / (t[i] - t[j]);
      }
    }
    k += term;
  }
  printf("The respective value of the variable v is: %.2f", k);
  return 0;
}