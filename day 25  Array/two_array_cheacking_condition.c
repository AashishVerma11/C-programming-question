#include <stdio.h>

int main() {
    
    int n,m,sum=0,sub=0,mul=1;
    
    printf("Enter how many array element you want to add in first array: ");
    scanf("%d",&n);
    int a[n];
     printf("Enter how many array element you want to add in second array: ");
    scanf("%d",&m);
    int b[m];

   

    printf("Enter %d interger in a array: ",n);
    for(int i=0; i<=n-1; i++){
        scanf("%d",&a[i]);
    }
  
    printf("\n");

    printf("Enter %d integer in b array: ",m);
    for(int i=0; i<=m-1; i++){
        scanf("%d",&b);
    }

     if(n==m){
        printf("Both array length is same\n");
    }else if(n>=1 && m>=1){
        printf("Both array length more than 1 \n");
    }else{
        printf("invalid array declaration \n");
    }
  
    if(a[0]==b[0]){
        printf("Array a and b both have the first element have same");
    }else if(a[n-1]==b[m-1]){
        printf("Array a and b both have the last element have same");
    }else{
        printf("Same elements not present ");
    }
    return 0;
}