/*4) Write a c program to check and print that given number is even or odd without using ternary operator and control statement.
-------------

sample input: int a=10
sample output : Even

sample input : int a=125
sample output : Odd */

#include<stdio.h>

void main(){
    int a=3;
    a%2==0 && printf("Even") || printf("odd");
}
