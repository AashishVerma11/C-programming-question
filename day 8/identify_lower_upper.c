/* 6) IdentifyTheGivenCharacterUppercvaseOrLowecase [ simple if ]
Write a C program to check whether a character is uppercase or lowercase alphabet using simple(if) only.

Sample input  : char ch = 'A';
Sample output : UpperCase

Sample input  : char ch = 'b';
Sample output : LoweCase */

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

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("UpperCase");
    }

    return 0;
}