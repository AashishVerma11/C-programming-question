/* 1) Bitwise Operators
ead 2 numbers(a,b) from user using scanf and perform below operations and print output.

Bitwise Operators

1) a & b

2) a | b

3) a ^ b

4) ~a 

5) a << 1 */

#include<stdio.h>

int main(){
    int a;
   int  b;

   printf("Enter a and b value: \n");
   scanf("%d %d",&a, &b);

   printf("a & b = %d\n", a & b);
   printf("a | b = %d\n", a | b);
   printf("a ^ b = %d\n", a ^ b);
   printf("~a = %lu\n",  ~a );
   printf("a << 1 = %d\n", a<<1);
   printf("a >> 1 = %d\n", a>>1);

    return 0;
}