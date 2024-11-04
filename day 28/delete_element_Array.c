#include <stdio.h>
int main()
{
    int n, ele, f = 0;
    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to delete: ");
    scanf("%d", &ele);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            f = 1;
            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            i--;
        }
    }

    if (f)
    {
        printf("New Array: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}