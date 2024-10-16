#include<stdio.h>

int main(){
    int num;

    scanf("%d",&num);
    
    for(int i=1; i<=5; i++){
        printf("Number is:%d and cube of the %d is :%d\n", i, i, i*i*i);
    }

    return 0;
}