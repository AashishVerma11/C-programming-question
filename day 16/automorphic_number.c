#include<stdio.h>

int main(){
    int n,m, product, numlast, prolast ;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    m =n;

    product= n*n;

    while (m>0)
    {
     
        numlast = m % 10;
        prolast = product % 10;

        if(numlast != prolast){
            printf("%d is not atomorphic number",n);
            return 0;
        }
        m/=10;
        product/=10;
    }

    printf("%d is an atomorphic number",n);
    

    return 0;
}