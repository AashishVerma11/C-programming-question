/*
Write C program to print given pattern.


            *
         *  *
      *     *
   *        *  
*  *  *  *  *               */


#include <stdio.h>

int main() {
    int n, i, j,s;
    
    
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        for(s=i; s<n; s++){
            printf("  ");
        }
    
        for(j=1; j<=i; j++){
        if(i==j||j==1||i==n){
            printf("* ");
        }else{
            printf("  ");
        }
        }
      
        printf("\n");
    }
    
    return 0;
}