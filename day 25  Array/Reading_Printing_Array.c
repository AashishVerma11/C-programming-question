/* Create a c program to read the array element and print the array element 
  while reading the element write that type of logic where the user can 
  see in which index the element is storing and while printing the element 
  with the index will be printed

Input as :  Enter how many array element you want to add
           5
           Enter the element for index 1
           10
           Enter the element for index 2
           20 
           so on...….

Output as : Element at arr[1] is 10 
            Element at arr[2] is 20
            so on...                                     */


#include <stdio.h>

int main() {
    
    int a[100],n;
    
    printf("Enter how many array element you want to add: ");
    scanf("%d",&n);
    if(n<1||n>100){
        printf("Enter array size only 1-100 ");
    }else{
        for(int i=0; i<=n-1; i++){
            printf("Enter the element for index %d: ", i);
            scanf("%d",&a[i]);
        }
    }
    for(int i=0; i<=n-1; i++){
        printf("Element at arr[%d] is %d\n",i,a[i]);
    }

    return 0;
}