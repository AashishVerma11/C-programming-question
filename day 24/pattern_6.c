/*
Write a C program to given pattern.

1
1  2
1  2  3
1  2  3  4  
1  2  3  4  5
1  2  3  4  
1  2  3
1  2
1           */


#include<stdio.h>

int main(){
    int n,a=1;
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        
          for(int j=1; j<=i; j++){
                printf("%2d",j);
            }
             printf("\n");
    }
     for(int i=1; i<=n; i++){
        
          for(int j=i; j<n; j++){
                printf("%2d",a++);
            }
            a=1;
             printf("\n");
    }
     
    return 0;
}