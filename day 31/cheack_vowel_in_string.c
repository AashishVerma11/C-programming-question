/*
Que 4 :
=======

Write a C program to check is the String contains any vowel or not.

Sample input  : Enter a String : Apple
Sample output  : This String contains vowel.

Sample input : Enter a String : Rhythm
Sample output  : There is no vowel present in this String.

*/

#include <stdio.h>

int main()
{
    int vol = 0;
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    // int length = 0;

    // for (int i = 0; str[length] != '\0'; i++)
    // {
    //     length++;
    // };

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                vol++;
                break;
            }
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vol++;
                break;
            }
        }
    }
    if (vol > 0)
    {
        printf("This String contains vowel.");
    }
    else
    {
        printf("There is no vowel present in this String.");
    }

    return 0;
}