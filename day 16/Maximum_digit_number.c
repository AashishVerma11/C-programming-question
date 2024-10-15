#include<stdio.h>

int main(){
    int n, maxdigit=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n>0){
        int digit = n%10;
        if(digit>maxdigit){
            maxdigit= digit;
        }
        n/=10;
    }
    printf("%d is highest digit in the number.", maxdigit);

    return 0;
}