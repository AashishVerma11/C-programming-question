/* 8 )IdentifyTheGivenCharacterUppercvaseOrLowecase [ if else ]
Write a C program to check whether a character is uppercase or lowercase alphabet using if-else.

Sample input  : char ch = 'A';
Sample output : UpperCase */

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: \n");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("LowerCase");
    }
    else
    {
        printf("UpperCase");
    }
}