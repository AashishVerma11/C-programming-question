/*
Write C program to print given pattern.

1   6   11   16  
2   7   12   17
3   8   13   18
4   9   14   19
5   10  15   20 */



#include <stdio.h>

int main() {
    int r,c, n;
    
    scanf("%d",&n);
   
    for(r=1; r<=n; r++){
        for(c=1; c<=n; c++){
           printf("%3d",r+(c-1)*n);
            
        }
        printf("\n");
    }
    
    return 0;
}