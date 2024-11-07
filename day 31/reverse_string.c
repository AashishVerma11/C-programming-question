#include <stdio.h>

int main()
{
    char str[] = "Aashish Verma";
    int length = 0;

    for (int i = 0; str[length] != '\0'; i++)
    {
        length++;
    };

    printf("Original String\n");
    for (int i = 0; i <= length; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    printf("Reverse String \n");

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
