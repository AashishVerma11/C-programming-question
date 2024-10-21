/*
Write C program to print given pattern.

1   2   3   4   5
10  9   8   7   6
11  12  13  14  15
20  19  18  17  16
21  22  23  24  25  */



#include <stdio.h>

int main() {
    int r,c, nr, nc,a=1;
    
    scanf("%d %d",&nr,&nc);
   
    for(r=1; r<=nr; r++){
      
        for(c=1; c<=nc; c++){
            if(r%2==0){
                printf("%3d",--a);
            }
            else{
                printf("%3d",a++);
            }
         
        }
        a=a+5;
        printf("\n");
    }
    
    return 0;
}