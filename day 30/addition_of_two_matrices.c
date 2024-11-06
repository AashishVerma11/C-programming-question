#include <stdio.h>

int main() {
    int row,col,n;
    
    printf("Enter the size of an square matrix :");
    scanf("%d",&n);
    
    int a[n][n];
     int b[n][n];
     int c[n][n];
    printf("Input elements in the first matrix: \n");
    for(row=0; row<n; row++){
        for(col=0; col<n; col++){
            printf("Element - [%d][%d]: ",row,col);
            scanf("%d",&a[row][col]);
        }
    }
    
     printf("Input elements in the second matrix: \n");
        for(row=0; row<n; row++){
        for(col=0; col<n; col++){
            printf("Element - [%d][%d]: ",row,col);
            scanf("%d",&b[row][col]);
        }
    }
    
    for(row=0; row<n; row++){
        for(col=0; col<n; col++){
            c[row][col]=a[row][col]+b[row][col];
        }
    }
    
    printf("the first matrix is: \n");
    for(row=0; row<n; row++){
        for(col=0; col<n; col++){
            printf("%2d",a[row][col]);
        }
        printf("\n");
    }
     printf("the second matrix is: \n");
    for(row=0; row<n; row++){
        for(col=0; col<n; col++){
            printf("%2d",b[row][col]);
        }
        printf("\n");
    }
    printf("The Addition of two matrices is: \n");
      for(row=0; row<n; row++){
        for(col=0; col<n; col++){
            printf("%3d",c[row][col]);
        }
        printf("\n");
    }

    return 0;
}