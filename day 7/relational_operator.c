/* 3) Relational Operators
read 2 numbers(x,y) from user using scanf and perform below operations and print output.

Relational Operators

1) x==y
2) x!=y
3) x>y
4) x<y
5) x>=y
6) x<=y */

#include<stdio.h>

int main(){
    int x;
   int  y;

   printf("Enter x xnd y vxlue: \n");
   scanf("%d %d",&x, &y);

   printf("x == y = %d\n", x == y);
   printf("x != y = %d\n", x != y);
   printf("x > y = %d\n", x > y);
   printf("x<y = %lu\n",  x<y );
   printf("x >= 1 = %d\n", x>=1);
   printf("x <= 1 = %d\n", x<=1);

    return 0;
}