/*
Write C program to print given pattern.

0  0  0  0  1
0  0  0  1  1
0  0  1  1  1
0  1  1  1  1
1  1  1  1  1   */
#include<stdio.h>

int main(){
    int n, i, j,s;
    
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        for(s=1; s<=n-i; s++){
            printf("%2d",0);
        }
        for(j=1; j<=i; j++){
           printf("%2d",1);
            
        }
         printf("\n");
    }
    
    return 0;
}