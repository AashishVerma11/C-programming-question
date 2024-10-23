/*
Write C program to print given pattern.

#  0  0  0  #
0  #  0  #  0
0  0  #  0  0
0  #  0  #  0
#  0  0  0  #  */

#include<stdio.h>

int main(){
    int n, i, j;
    char has='#';
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i==j||i+j==n+1){
                printf("%2c",has);
            }else{
                printf("%2d",0);
            }
        }
         printf("\n");
    }
    
    return 0;
}