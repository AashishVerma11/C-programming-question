/*
Write C program to print given pattern.

A  B  C  D  
B  C  D  E
C  D  E  F
D  E  F  G */

#include <stdio.h>

int main() {
    int n,value=64,i,j;
    
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        value = value+i;
        for(j=1; j<=n; j++){
            printf("%2c",value++);
        }
        value=64;
        printf("\n");
    }

    return 0;
}