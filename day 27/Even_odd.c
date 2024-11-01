#include<stdio.h>

int main(){
    int a[10]={0};

    printf("Enter 10 integer elements: \n");
   

    for(int i=0; i<10; i++){
        printf("Element at index %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Element at even indices are: \n");
    
    for(int i=0; i<10; i++){
        if(i%2==0){
            printf("Elements at index %d: %d\n",i,a[i]);
        }
    }

    printf("------------------------------------\n");

    printf("Elements at odd indices are: \n");
    for(int i=0; i<10; i++){
        if(i%2!=0){
            printf("Element at index %d: %d\n",i, a[i]);
        }
    }




    return 0;
}