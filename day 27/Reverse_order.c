/* Reverse order temporary method 

#include <stdio.h>

int main()
{
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }
    printf("The values store into the array are: ");

    for (int i = 0; i < n; i++)
    {
        printf("%2d", a[i]);
    }
    printf("\n");
    printf("The values store into the array in reverses are : ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%2d", a[i]);
    }
}

*/


// method 2.

#include <stdio.h>

int main() {
    int n,i;
    
    printf("Enter array size: ");
    scanf("%d",&n);
    
    int a[n];
    
    printf("Enter %d integer: ",n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    printf("\n");
    
    printf("original array: ");
    for(i=0; i<n; i++){
        printf("%3d",a[i]);
    }

    for(i=0; i<n/2; i++){
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    
    printf("\n");
    printf("Reversed Array: ");
    for(i=0; i<n; i++){
        printf("%3d",a[i]);
    }
    
    return 0;
}