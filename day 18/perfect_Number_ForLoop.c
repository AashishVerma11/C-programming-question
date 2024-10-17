#include<stdio.h>

int main(){
    int n,sum=0;

    scanf("%d",&n);

    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(n==sum){
        printf("%d is a Perfect Number",n);
    }else{
        printf("%d is not Perfect Number",n);
    }

}