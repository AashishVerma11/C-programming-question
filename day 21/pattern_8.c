/*
Write C program to print given pattern.

1
2  6
3  7 10
4  8 11 13
5  9 12 14 15     */


#include<stdio.h>

int main(){
    int n, i, j,a,k;

    scanf("%d",&n);

    for(i=1; i<=n; i++){
        a=i; k=n-1;
        for(j=1; j<=i; j++){
            
            printf("%4d",a);
            a+=k--;
        }
        printf("\n");
    }
}