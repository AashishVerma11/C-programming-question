#include<stdio.h>

int main(){
    int n,m, product, numlast, prolast ;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    m =n;

    product= n*n;

    while (n>9)
    {
     
        numlast = n%10;
        prolast = product%10;

        if(numlast == prolast){
            printf("it is an ");
        }

    }
    

    return 0;
}