/*
Write a C program to print given pattern.

 A  B  C  D  E
    A  B  C  D
       A  B  C
          A  B
             A   */




#include <stdio.h>

int main() {
    int n,i;
    char ch='A';
    
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        for(int j=1; j<i; j++ ){
            printf("  ");
        }
          
        for(int j=i; j<=n; j++){
           printf("%2c",ch++);
           
        }
       ch='A';
        printf("\n");
    }

    return 0;
}