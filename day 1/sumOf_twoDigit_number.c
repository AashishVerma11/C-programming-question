/*4) Write a c program to make sum of two digit number 
input n=34
output- 7 */

#include<stdio.h>

void main(){
 int n=34, a,b;
 a=n%10;
 b=n/10;
 printf("value of sum: %d",a+b);
}