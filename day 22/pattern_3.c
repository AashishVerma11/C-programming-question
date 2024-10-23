/*
Write a C program to print given pattern.

 5  4  3  2  1
    4  3  2  1
       3  2  1
          2  1
             1            */

#include <stdio.h>

int main()
{
    int n, i, a;

    scanf("%d", &n);
    a = n;

    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }
        for (int j = i; j <= n; j++)
        {
            printf("%2d", a--);
        }
        a = n - i;
        printf("\n");
    }

    return 0;
}
