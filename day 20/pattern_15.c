/*
Write C program to print given pattern.

A  E  I  M
B  F  J  N
C  G  K  O
D  H  L  P  */

#include <stdio.h>

int main() {
    int n,i,j;
    
    char ch='A';
    
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        
        for(j=1; j<=n; j++){
            printf("%2c",ch);
             ch=ch+4;
        }
       ch='A'+i;
        printf("\n");
    }

    return 0;
}