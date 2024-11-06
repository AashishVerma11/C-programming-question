#include <stdio.h>

int main() {
    int row,col,n;
    
    printf("Enter array size :");
    scanf("%d",&n);
    
    int a[n][n];
    for(row=0; row<n; row++){
        for(col=0; col<n; col++){
            printf("Element - [%d][%d]: ",row,col);
            scanf("%d",&a[row][col]);
        }
    }
    
    for(row=0; row<n; row++){
        for(col=0; col<n; col++){
            printf("%2d",a[row][col]);
        }
        printf("\n");
    }
    

    return 0;
}