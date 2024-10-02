/* 5) Write a c program to find maximum number among two number without using ternary operator and control satements 
-------

Sample input : int a=10, b=20;
Sample output : 20 */

#include<stdio.h>

void main(){
    int a=2,b=2;
    a>b && printf("a is big") || b>a && printf("b is big") || printf("both are equal"); 
}