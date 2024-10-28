/*
Write a C program to given pattern.

            *
         *  *  *
      *  *  *  *  *
   *  *  *  *  *  *  *
*  *  *  *  *  *  *  *  *   */

// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n;
   
   scanf("%d",&n);
   
   for(int i=1; i<=n; i++){
       for(int s=i; s<n; s++){
           printf("  ");
       }
       for(int j=1; j<=i; j++){
           printf("* ");
       }
       for(int j=2; j<=i; j++){
           printf("* ");
       }
       printf("\n");
   }

    return 0;
}