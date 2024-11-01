#include<stdio.h>

int main(){
    int n;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter %d Element: \n",n);

    for(int i=0; i<n; i++){
        printf("Element at index %d: ",i);
        scanf("%d",&a[i]);
    }
    
    printf("The elements in the array are: \n");

    for(int i=0; i<n; i++){
        printf("Element at index %d: %d\n",i,a[i]);
    }


    return 0;
}
