/* Perform the arithmetic operation on the array 
    element.
    Test case as:
    |- with the less line of code
    |- common element to use while calculating the equation 
    
    Input as :[ 1,2,3,4 ]
    Output as:  
    sum= 10;
    sub= -8
    multi= 24                */

    #include <stdio.h>

int main() {
    
    int a[100],n,sum=0,sub=0,mul=1;
    
    printf("Enter how many array element you want to add: ");
    scanf("%d",&n);
    if(n<1||n>100){
        printf("Enter array size only 1-100 ");
    }else{
        for(int i=0; i<=n-1; i++){
            scanf("%d",&a[i]);
            sum+=a[i];
            if(i==0){
                sub=a[i];
            }else{
                sub-=a[i];
            }
            mul*=a[i];
        }
        printf("sum= %d sub= %d mul= %d",sum,sub,mul);
    }
  
    return 0;
}