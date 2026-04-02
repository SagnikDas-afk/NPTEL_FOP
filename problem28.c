//Write a C program to reverse an array by swapping the elements and without using any new array.

#include <stdio.h>
int main() {
  int array[100], n, c;
  scanf("%d", &n); // n is number of elements in the array.
  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }
  // Reverse array by swapping
  for (c = 0; c < n / 2; c++) {
    int temp = array[c];
    array[c] = array[n - c - 1];
    array[n - c - 1] = temp;
  }

printf("Reversed array elements are:\n");

  for (c = 0; c < n; c++) {
    printf("%d\n", array[c]);
  }
  return 0;
}