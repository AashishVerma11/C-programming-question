/*  Que-1)
----------------
Given an array of integers, print the sum of the first 2 elements in the array.
If the array length is less than 2, just sum up the elements that exist,
print 0 if the array is having length 0.      */

#include<stdio.h>

int main(){
    int n,i,sum=0;
    
    printf("Enter array size: ");
    scanf("%d",&n);
    
    int a[n];
    
    if(n==0) printf("Length of array is %d\n",n);
    else{
        printf("Enter %d integers: ",n);
    }
    
    for(i=0; i<=n-1; i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<2; i++){
        sum+=a[i];
    }
    
   if(n>0){
        printf("Sum of first two element of an array = %d",sum);
  }
    
    return 0;
}
 