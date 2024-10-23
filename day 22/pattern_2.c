/*
Write a C program to print given pattern.


1  2  3  4  5
   4  6  8 10
      9 12 15
        16 20
           25    */


#include <stdio.h>

int main() {
    int n,i,a=1;
    
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        for(int j=1; j<i; j++ ){
            printf("   ");
        }
          a=i;
        for(int j=i; j<=n; j++){
            if(i>1){
                printf("%3d",a*i);
                a++;
            }else{
                printf("%3d",a++);
            }
           
        }
       
        printf("\n");
    }

    return 0;
}