#include<stdio.h>

int main(){
    int n,i,ele,f=0;
    
    printf("Enter array size: ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter %d integer: ",n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    printf("\n");
    printf("Enter a element to search: ");
    scanf("%d",&ele);
    
    printf("\n");
    for(i=0; i<n; i++){
        if(a[i]==ele){
            printf("%d in %d cell\n",ele, i+1);
            f=1;
        }
    }
    if(f==0){
        printf("%d not found",ele);
    }
    
    return 0;
}