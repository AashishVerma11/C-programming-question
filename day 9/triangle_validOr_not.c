#include<stdio.h>

int main(){

    int side1, side2, side3, sum1, sum2, sum3;

    printf("Enter side1 side2 and side3 value: \n");
    scanf("%d %d %d",&side1, &side2, &side3);

    sum1= side1 + side2;
    sum2 = side1 + side3;
    sum3 = side2 + side3;

 

    if(sum1 > side3 && sum2 > side2 && sum3 > side1 ){
        printf("The triangle is valid\n");
    }else{
        printf("the triangle is not valid\n");
    }

    return 0;
}