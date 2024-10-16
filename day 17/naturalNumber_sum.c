
#include<stdio.h>

int main(){
    int num, sum=0;

    scanf("%d", &num);

    printf("The first %d natural number is :", num);

    for(int i=1; i<=num; i++){
        printf("%d ", i);
        sum = sum +i;
    }

    printf("\n");
    printf("The Sum of Natural Number upto %d term : %d", num, sum);
}