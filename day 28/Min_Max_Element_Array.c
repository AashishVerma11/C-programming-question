#include <stdio.h>

int main() {
    int n,i,j,max,min; 
    
    printf("Enter array size: ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter %d integers: ",n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    max=a[0];
    min=a[0];
   for(i=1; i<n; i++){
       if(max<a[i]){
           max =a[i];
       }else if(min>a[i]){
           min = a[i];
       }
   }
   
   printf("Minimum Element : %d\n",min);
   printf("Maximum Element : %d\n",max);

    return 0;
}