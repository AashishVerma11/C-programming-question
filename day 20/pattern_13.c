/*
Write C program to print given pattern.

A  B  C  D 
E  F  G  H
I  J  K  L
M  N  O  P
Q  R  S  T */


#include <stdio.h>

int main() {
    int r,c,u=65,n;
    
    
    scanf("%d",&n);
   
    for(r=1; r<=n; r++){
        for(c=1; c<=n; c++){
           printf("%2c",u++);
            
        }
        printf("\n");
    }
    
    return 0;
}