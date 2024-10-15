#include <stdio.h>

int main()
{
    int n,  esum = 0, osum=0; 

    printf("Enter a positive number: ");
    scanf("%d",&n);

    if(0>n){
        printf("Invalid input");
    }

    while(n>=1){
        if(n%2==0){
            esum = esum + n;
        }else{
            osum = osum + n;
        }
        n--;
    }

    printf("Even sum =>%d\n", esum);
    printf("Odd sum=>%d\n", osum);

    return 0;
}