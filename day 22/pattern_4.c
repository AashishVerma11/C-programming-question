/*
Write a C program to print given pattern.

 A  B  C  D  E
    A  B  C  D
       A  B  C
          A  B
             A   */


/*
Write a C program to print given pattern.


1  2  3  4  5
   4  6  8 10
      9 12 15
        16 20
           25    */


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,i;
    char ch='A';
    
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
        for(int j=1; j<i; j++ ){
            printf("  ");
        }
          
        for(int j=i; j<=n; j++){
           printf("%2c",ch++);
           
        }
       ch='A';
        printf("\n");
    }

    return 0;
}