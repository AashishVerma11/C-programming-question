/*
Write C program to print given pattern.

1
1  2
1     3
1        4
1  2  3  4  5  */

#include<stdio.h>

int main(){
    int n, i, j,s;
    
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            if(i==j||j==1||j==n||i==n){
        printf("%2d",j);
            }else{
                printf("  ");
            }
        }
         printf("\n");
    }
    
    return 0;
}