/*
Write a C program to given pattern.

        *       
      * * *    
    * * * * *   
  * * * * * * *    
* * * * * * * * *  
  * * * * * * *  
    * * * * *    
      * * *     
        *        */


#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        
          for(int s=i; s<n; s++){
                printf("  ");
            }
             for(int j=1; j<=i; j++){
                printf("* ");
            }
            for(int j=1; j<i; j++){
                printf("* ");
                
            }  
            printf("\n");
    }
       for(int i=2; i<=n; i++){
              for(int s=1; s<i; s++){
                  printf("  ");
              }
              for(int j=i; j<=n; j++){
                  printf("* ");
                 
              }
              for(int j=n-i; j>=1; j-- ){
                  printf("* ");
                  
              }
              
              printf("\n");
          }
    return 0;
}