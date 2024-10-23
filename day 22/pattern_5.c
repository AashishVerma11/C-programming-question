/*
Write a C program to print given pattern.(Fibonacci sequence)

0  1   1    2    3
   5   8    13   21
       34   55   89
            144  233
                 377     */



#include <stdio.h>

int main() {
    int n,i,a=0,b=1,sum=0;
    
    
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        for(int j=1; j<i; j++ ){
            printf("    ");
        }
        for(int j=i; j<=n; j++){
            
             if(i==1 && j==1){
                printf("%4d",0);
            }else if(i==1 && j==2){
                printf("%4d",1);
            }
            else {
               sum = a+b;
            a=b;
            b=sum;
            printf("%4d",sum); 
            }
        }
       printf("\n");
    }

    return 0;
}