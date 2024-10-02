/* 9 ) Uppercase to Lowercase [ Simple if ]

Write a C program to read one character from user and convert it into upercase if given character is in lowercase otherwise convert itno lowercase using simple (if) only.

Sample input  : char ch = 'A';
Sample output : a

Sample input  : char ch = 'b';
Sample output : B */

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a charcter: \n");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c\n", ch - 32);
    }
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c\n", ch + 32);
    }
}