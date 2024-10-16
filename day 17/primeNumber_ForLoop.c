#include<stdio.h>

int main(){
    int num, isprime=1;

    scanf("%d",&num);

    for(int i=2; i<=num; i++){
        if(num%i==0){
            isprime=0;
        }
    }
   if(isprime){
    printf("%d is a prime number",num);
   }else printf("%d is not a prime number",num);

    return 0;
}