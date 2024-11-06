#include <stdio.h>

int main()
{
    int row, col, n, sum = 0;

    printf("Input the size of the square matrix : ");
    scanf("%d", &n);

    int a[n][n];
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            printf("Element - [%d][%d]: ", row, col);
            scanf("%d", &a[row][col]);
        }
    }

    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            printf("%2d", a[row][col]);
        }
        printf("\n");
    }

    printf("The matrix is: \n");
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            if (row == col)
            {
                sum += a[row][col];
            }
        }
    }

    printf("Addition of the principal Diagonal elements is :%d", sum);

    return 0;
}