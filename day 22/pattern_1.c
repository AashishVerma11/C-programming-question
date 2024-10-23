/*
Write a C program to print given pattern.

*  *  *  *  *
   *  *  *  *
      *  *  *
         *  *
            *   */


#include <stdio.h>

int main() {
    int n,i;
    
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        for(int j=1; j<i; j++ ){
            printf("  ");
        }
        for(int j=i; j<=n; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


