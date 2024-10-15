#include<stdio.h>

int main(){
    long n,count=0 ;

    printf("Enter the numbers: ");
    scanf("%ld",&n);

    while(n!=0){
        n=n/10;
        count++;
    }
    if(n==0){
        count++;
    }
    printf("%d", count);

    return 0;
}