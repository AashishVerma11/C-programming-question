/*
Write a C program to given pattern.


            1
         2  1  2
      3  2  1  2  3
   4  3  2  1  2  3  4    */


#include <stdio.h>

int main() {
   int n,a=2,b=1;
   
   scanf("%d",&n);
   
   for(int i=1; i<=n; i++){
       
       for(int s=i; s<n; s++){
           printf("   ");
       }
         
       for(int j=1; j<=i; j++){
           printf("%3d",b);
           b--;
       }
        b=i+1;
       
       for(int j=2; j<=i; j++){
           printf("%3d",a);
           a++;
       }
       a=2;
       printf("\n");
   }

    return 0;
}