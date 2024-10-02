/* 4) Write a C program to convert a lowercase character to uppercase take the lowercase character and convert into in a uppercase

Input as :

Enter a lowercase character: u

Expected output :

Uppercase equivalent: U */

#include <stdio.h>

void main()
{
    char lower, upper;
    printf("Enter a charcter: ");
    scanf("%c", &lower);
    upper = lower - 32;
    printf("%c", upper);
}
