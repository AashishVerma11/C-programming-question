/* 4) Vowel OR Consonant [ if else ]

Write a C program to input any alphabet and check whether it is vowel or consonant using if-else.*/

#include <stdio.h>
int main()
{
    char ch;

    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') && !(ch >= 'a' && ch <= 'z'))
    {
        printf("Uppercase");
    }
    else
    {
        printf("Lowercase");
    }
}