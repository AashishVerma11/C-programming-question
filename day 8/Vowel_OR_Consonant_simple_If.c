/* 1) Vowel OR Consonant

Write a C program to input any alphabet and check whether it is vowel or consonant using simple(if) only.

Sample input  : char ch = 'A';
Sample output : Vowel

Sample input  : char ch = 'b';
Sample output : Consonant */

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a Character: \n");
    scanf(" %c", &ch);

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            printf("%c is a Vowel", ch);

        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
            printf("%c is a consonant\n", ch);
    }

    if (!(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'))
    {
        printf("please enter a valid alphabet\n");
    }

    return 0;
}