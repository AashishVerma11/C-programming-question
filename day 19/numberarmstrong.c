//Write a C program to find all Armstrong numbers between 100 to n.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, r, count, i, j;
    double sum;

    // Input from the user
    printf("Enter a number greater than 100: ");
    scanf("%d", &n);
    m = n;

    // Validate that the input number is greater than 100
    if (n < 100)
    {
        printf("Please enter a value greater than 100\n");
        return 1; // Exit the program if the input is less than 100
    }

    count = 0;
    for (; m != 0; m /= 10)
    {
        count++;
    }
    printf("Armstrong numbers between 100 and %d are: ", n);

    for (i = 100; i <= n; i++)
    {
        sum = 0;
        j = i;

        for (j = i; j != 0; j /= 10)
        {
            r = j % 10;
            sum += pow(r, count);
        }

        if (i == sum)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
