/* 2) FindMaximum [ Simple if ]
Write a C program to find maximum between two numbers using simple (if) only.
#include<stdio.h> */

int main()
{
    int a, b;

    printf("Enter a and b value: \n");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("a is big\n");

    if (b > a)
        printf("b is big");
}
