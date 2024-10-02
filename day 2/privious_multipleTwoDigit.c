/*1) Write a c program to previous multiple of 10 given 2 digit number only.
------
sample input : int a=26
sample output: 20 */


#include<stdio.h>

void main(){
    int n =26;
    n=n%10;
    printf("%d",n*10);

}