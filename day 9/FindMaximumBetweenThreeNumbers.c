#include <stdio.h>

int main()
{

    int a, b, c;

    printf("Enter a ,b and c value: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("all are equal");
    }
    else if (a == b && b > c)
    {
        printf("a and b is big");
    }
    else if (b == c && b > a)
    {
        printf("b and c is big");
    }
    else if (a == c && c > b)
    {
        printf("a and c is big");
    }
    else if (a > b && a > c)
    {
        printf("a is big");
    }
    else if (b > c)
    {
        printf("b is big");
    }
    else
    {
        printf("c is big");
    }

    return 0;
}