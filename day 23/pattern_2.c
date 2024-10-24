/*
Write C program to given pattern.

1   2   3   4   5
6   7   8   9
10  11  12  
13  14
15                   */


#include <stdio.h>

int main() {
    int n, i, j,a=1;
    
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        for(j=i; j<=n; j++){
            printf("%3d",a++);
        }
        printf("\n");
    }
    
    return 0;
}