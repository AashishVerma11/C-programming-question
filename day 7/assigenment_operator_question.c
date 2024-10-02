/* 4) read 2 numbers(a,b) from user using scanf and perform below operations and print output.

Assignment Operators

1) a += b
2) a -= b
3) a *= b
4) a /= b
5) a %= b */

#include<stdio.h>

int main(){
    int a;
   int  b;

   printf("Enter a and b value: \n");
   scanf("%d %d",&a, &b);

   printf("a += b = %d\n", a += b);
   printf("a -= b = %d\n", a -= b);
   printf("a *= b = %d\n", a *= b);
   printf("a/=b = %lu\n",  a/=b );
   printf("a %% b = %d\n", a%1);

    return 0;
}