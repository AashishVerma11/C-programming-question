/* Que-3
_________________________
Given an array of integer,print Yes if 15 appears as either the first or last element in the array
else print Not present.
The array will be length 1 or more if not print invalid array creation.

Read the element from the user and while printing the ans print the array elements also */

#include <stdio.h>

int main()
{

    int n, sum = 0, sub = 0, mul = 1;

    printf("Enter how many array element you want to add: ");
    scanf("%d", &n);
    int a[n];

    if (n < 1)
    {
        printf("Enter array size more than 0 ");
    }
    else
    {
        for (int i = 0; i <= n - 1; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i <= n - 1; i++)
        {
            printf("%3d", a[i]);
        }
        printf("\n");
        if (a[0] == 15 || a[n - 1] == 15)
        {
            printf("yes");
        }
        else
        {
            printf("Not Present");
        }
    }

    return 0;
}