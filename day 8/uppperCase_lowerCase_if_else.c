/* 3) Uppercase to Lowercase [ if else ]
Write a C program to read one character from user and convert it into upercase if given character is in lowercase otherwise convert itno lowercase using if-else only. */

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: \n");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("lowercase %c", ch);
    }
    else
    {
        printf("lowercase %c", ch);
    }
}
