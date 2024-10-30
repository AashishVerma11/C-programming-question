/*
__________________
Read the element from the user inside the array in unorder manner and sort the 
array in dec order by the general way of sorting?

Print the array before sorting as well as after sorting 
*/

#include<stdio.h>

int main(){
    int n,tem;

    printf("Enter array size: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter %d integers in unorder manner: ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Unsorted Array: ");

    for(int i=0; i<n; i++){
        printf("%d",a[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]<a[j]){
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }

    printf("\n");

    printf("Sorted Array: ");

    for(int i=0; i<n; i++){
         printf("%d",a[i]);
    }


    return 0;
}