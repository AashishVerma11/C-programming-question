//2) Write a c program to swap two number with using 3rd variable input as a =10; b=20; output as a=20; b=10;

#include<stdio.h>

void main(){
 int a =10, b=20, c ;
 c=a;
 a=b;
 b=c;
 printf("a=%d b=%d", a,b);
  
}