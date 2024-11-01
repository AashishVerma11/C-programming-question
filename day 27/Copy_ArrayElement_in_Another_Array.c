#include<stdio.h>

int main(){
    int n;

    printf("Enter array size: ");
    scanf("%d",&n);

    int a[n];
    int b[n];

    for(int i=0; i<n; i++){
        printf("element - %d: ",i);
        scanf("%d",&a[i]);
    }

    for(int i=0; i<n; i++){
        b[i]=a[i];
    }

    printf("The elements stored in the first array are: ");
    for(int i=0; i<n; i++){
        printf("%3d",a[i]);
    }

    printf("\n");

    printf("The elements copied into the second array are: ");
    for(int i=0; i<n; i++){
        printf("%3d",b[i]);
    }
}