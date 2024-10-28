/*
Write a C program to given pattern.


*  *  *  *  *  *  *  *  *
   *  *  *  *  *  *  *
      *  *  *  *  *
         *  *  *
            *                        */



#include <stdio.h>

int main() {
   int n;
   
   scanf("%d",&n);
   
   for(int i=1; i<=n; i++){
       
       for(int s=1; s<i; s++){
           printf("  ");
       }
         
       for(int j=i; j<=n; j++){
           printf("* ");
       }
     for(int j=i; j<n; j++){
         printf("* ");
     }
       
       printf("\n");
   }

    return 0;
}