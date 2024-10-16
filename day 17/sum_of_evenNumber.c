#include<stdio.h>

int main(){
    int num, sum=0;

    scanf("%d",&num);

    printf("The even number are: ");

    for(int i=2; i<=num*2; i++){
        
        if(i%2==0){
            printf("%d ",i);
            sum = sum + i;
        }
    }
    printf("\n");

    printf("The Sum of even Natural Number up to %d terms: %d",num, sum);
}