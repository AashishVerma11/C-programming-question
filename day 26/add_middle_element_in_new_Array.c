/*Que-2)
________________________
Given 2 integer arrays, a and b, each length is 3, print a new array length 2
containing their middle elements.

Print the old array and the new array element  */


#include<stdio.h>

int main(){
    int a[3]={1,2,3};
    int b[3]={5,6,7};
    int c[] ={a[1],b[1]};
    
    printf("Old array: \n");
    for(int i=0; i<3; i++){
        printf("%2d",a[i]);
    }
    printf("\n");
     for(int i=0; i<3; i++){
        printf("%2d",b[i]);
    }
    
    printf("\nNew Array: \n");
    for(int i=0; i<2; i++){
        printf("%2d",c[i]);
    }
    
    return 0;
}