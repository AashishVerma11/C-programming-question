/* 3) Write a C program to convert temperature from Fahrenheit to Celsius.

C= (F - 32) * (5.0 / 9.0)

Input as :
Enter temperature in Fahrenheit: 100
Expected output:
100.00 Fahrenheit is 37.78 Celsius. */

#include <stdio.h>
int main()
{
    float fahrenheit = 0;
    float celsius = 0;

    printf("Enter the fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * (5.0 / 9.0);

    printf("%.2f fahrenheit is %.2f celsius.", fahrenheit, celsius);
}
