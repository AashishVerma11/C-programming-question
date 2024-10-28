/*
Write a C program to given pattern.

            1
         3  2  1
      5  4  3  2  1
   7  6  5  4  3  2  1
9  8  7  6  5  4  3  2  1   */

     
#include <stdio.h>

int main() {
   int n,a=1,b=1;
   
   scanf("%d",&n);
   
   for(int i=1; i<=n; i++){
       
       for(int s=i; s<n; s++){
           printf("   ");
       }
         b=i*2-1;
       for(int j=1; j<=i; j++){
           printf("%3d",b);
           b--;
       }
        b=i+2;
       
       for(int j=2; j<=i; j++){
           printf("%3d",a);
           a--;
       }
       
       a=i;
       printf("\n");
   }

    return 0;
}