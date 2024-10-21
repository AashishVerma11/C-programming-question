/* Que 7 :
=======

Write C program to print given pattern.

0  1  0  1  0
1  0  1  0  1
0  1  0  1  0
1  0  1  0  1
0  1  0  1  0  */

#include <stdio.h>

int main()
{
    int r, c, nr, nc;

    scanf("%d %d", &nr, &nc);

    for (r = 1; r <= nr; r++)
    {
        for (c = 1; c <= nc; c++)
        {
            if ((r + c) % 2 == 0)
            {
                printf("%2d", 0);
            }
            else
            {
                printf("%2d", 1);
            }
        }

        printf("\n");
    }

    return 0;
}
