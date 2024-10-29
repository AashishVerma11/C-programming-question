#include <stdio.h>

int main() {
    
    int n,sum=0,sub=0,mul=1;
    
    printf("Enter how many array element you want to add: ");
    scanf("%d",&n);
    
    int a[n];
    
    if(n==1){
        printf("yes the array length is 1 ");
    }else if(n>1){
        printf("yes array length is more than 1 \n");
    }else{
        printf("array length is less than 1");
    }
    
     printf("Enter %d integers: ",n);
    for(int i=0; i<=n-1; i++){
       scanf("%d",&a[i]);
       
    }
    if(a[0]==a[n-1]){
           printf("first and last element both are equal\n");
       }else{
             printf("first and last element both are not equal\n");
       }
       
       printf("Array Elemtens: ");
       
    for(int i=0; i<=n-1; i++){
        printf("%3d",a[i]);
    }
  
    return 0;
}