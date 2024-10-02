/* 1) Add 1st and Last

Write a c program to take input of 3 digit number from the user , and add the 1st digit and last digit of that given number
input :- 345
output :- 8 */

#include <stdio.h>

void main()
{
    int n, t, sum;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    t = n % 10;
    sum = t;
    n = n / 10;
    t = n / 10;
    sum = sum + t;
    printf("%d", sum);
}
