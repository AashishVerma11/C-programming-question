/* 2) Program:
Find Even or Odd
Description:
Write a C program to find the given number is even or odd. Take the input from the console by using scanf().
Constraints:
SampleInput:
Enter a number : 12

Enter a number : 13

SampleOutput:
12 is an Even number.

13 is an Odd number.
Explanation:
Don't use any control flow statement or ternary operator.*/

#include<stdio.h>

int main(){
    int num1,num2  ;
    printf("Enter a number\n");
    scanf("%d %d",&num1,&num2);

    num1%2 == 0 && printf("%d is Even number.",num1) || printf("%d is an odd number", num1);
    num2%2 == 0 && printf("%d is Even number.", num2) || printf("%d is an odd number", num2);
}
