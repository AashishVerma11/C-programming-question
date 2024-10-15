#include <stdio.h>

int main()
{
    int n, asum = 0, psum = 1, rem;
    printf("Enter a number: ");
    scanf("%ld", &n);
    int m = n;

    while (n != 0)
    {
        rem = n % 10;
        asum = asum + rem;
        psum = psum * rem;
        n /= 10;
    }

    if (asum == psum)
    {
        printf("%d is a spy Number", m);
    }

    return 0;
}