//Write a C Program to reverse a given word using function. e.g. INDIA should be printed as AIDNI

#include<stdio.h>
#include<string.h>

void reverse(char[], int, int);
    int main()
    {
        char str1[20];
        scanf("%s", str1); //The string is taken as input form the test data. 
     
/* Complete the program to print the string in reverse order using the function
void reverse(char[], int, int);
Use the printf statement as
printf("The string after reversing is: %s\n", str1); 
You can use different variable also.
*/
    // Inside main(), after scanf:
    int length = strlen(str1);
    reverse(str1, 0, length - 1); // Pass the string, start index, and end index
    printf("The string after reversing is: %s\n", str1); 
    return 0;
}
void reverse(char str[], int start, int end)
{
    char temp;
    if (start >= end)
    {
        return; // Base case: indices have met or crossed
    }
    
    // Swap the characters at start and end
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call moving towards the center
    reverse(str, start + 1, end - 1);
}
