/* 2) Operation Using Scanf Function
 Write a C program that takes two integers and operator (+,-,*,/) as input from the user using scanf and perforom calculates their sum, substraction, multiplication, and division.
------------------------------------------------------------- */

#include<stdio.h>

int main(){
    int num1, num2;
    char op;

    printf("Enter two number :\n");
    scanf("%d %d",&num1, &num2);

    printf("Enter a operator: ");
    scanf(" %c", &op);

     

    (op == '+') &&  printf("addition = %d\n",  num1 +num2) || (op == '-') &&  printf("substraction = %d\n",  num1 - num2) ||( op == '*') && printf("multiplication = %d\n", num1 * num2) || (num1 == 0)&& printf("division are not allowed\n") || (num2 == 0) && printf("dicision are not allowed\n") || (op = '/') &&   printf("division = %d\n", num1 / num2);
    

    return 0;

}