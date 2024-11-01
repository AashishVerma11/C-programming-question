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