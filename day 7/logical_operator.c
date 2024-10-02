/* 6) Logical Operators
read 2 numbers(a,b) from user using scanf and perform below operations and print output.

Logical Operators
1) a && b
2) a || b
3) !a
4) !b */

#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("\n");

    printf("a && b = %d\n", a && b);
    printf("a || b = %d\n", a || b);
    printf("!a = %d\n", !a);
    printf("!b = %d\n", !b);

    return 0;
}