/*
Write C program to print given pattern.

*
*  *
*  *  *
*  *  *  *
*  *  *  *  *  */

#include<stdio.h>

int main(){
    int n, i, j,s;
    
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
        printf("*");
            
        }
         printf("\n");
    }
    
    return 0;
}