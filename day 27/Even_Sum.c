#include<stdio.h>

int main(){
    int n,sum=0; 

    printf("Enter size of array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter %d elements into the array: \n",n);

    for(int i=0; i<=n-1; i++){
        printf("Element at index %d: ",i);
        scanf("%d",&a[i]);

        if(a[i]%2==0){
            sum+=a[i];
        }
    }

    printf("sum of all even number in the array is = %d",sum);

    return 0;
}