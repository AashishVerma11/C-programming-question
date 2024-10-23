/*
Write a C program to print given pattern.

1  2  3  4  5
2  2  3  4  5
3  3  3  4  5
4  4  4  4  5
5  5  5  5  5   */



#include <stdio.h>

int main() {
    int n,i,a=0,b=1,sum=0;
    
    
    scanf("%d",&n);
    
   for(i=1; i<=n; i++){
       for(int j=1; j<i; j++){
           printf("%2d",i);
       }
       for(int j=i; j<=n; j++){
           printf("%2d",j);
       }
       printf("\n");
   }

    return 0;
}