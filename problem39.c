//Write a C program to store n elements using Dynamic Memory Allocation - calloc() and find the Largest element

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; 
    float *element;

    scanf("%d", &n); //Total number of elements

    // Allocate the memory for 'n' number of elements. 
    //Then take the elements as input from test data
// Allocate memory for 'n' number of elements using calloc
    element = (float*)calloc(n, sizeof(float));

    if (element == NULL) {
        printf("Memory not allocated.\n");
        return 0;
    }

    // Take the elements as input
    for (int i = 0; i < n; ++i) {
        scanf("%f", element + i);
    }

    // Logic to find the largest element
    for (int i = 1; i < n; ++i) {
        if (*element < *(element + i)) {
            *element = *(element + i);
        }
    }

    printf("Largest element = %.2f\n", *element);

    // Free the allocated memory
    free(element);

    return 0;
}