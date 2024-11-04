#include <stdio.h>

int main() {
    int n,i,ele,f=0; 
    
    printf("Enter array size: ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter %d integers: ",n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    printf("Element to Serach: ");
    scanf("%d",&ele);
    
    for(i=0; i<n; i++){
        if(a[i]==ele){
            printf("Element %d found at index %d\n",ele,i);
            f=1;
            break;
        }
    }
    if(f==0){
        printf("Element %d is not found in the array");
    }

    return 0;
}