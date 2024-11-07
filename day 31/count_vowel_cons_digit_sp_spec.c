/*
Que 3 :
=======

Write a C program to count the Count the vowel, Consonant, Digit and Special Character in a given String .

Sample input :
Enter a String : Nareshit@123

Sample output  :
Vowel count is : 3
Consonant count is : 5
Digit count is : 3
Special Character count is : 1

*/

#include <stdio.h>

int main()
{
    int vol = 0, col = 0, sp = 0, spec = 0, digit = 0;
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
            }
            else
            {
                col++;
            }
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vol++;
            }
            else
            {
                col++;
            }
        }
        else if (str[i] == ' ')
        {
            sp++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else
        {
            spec++;
        }
    }

    printf("vowel= %d\nconsonant= %d\nspace= %d\nspecial character= %d\nDigit= %d", vol, col, sp, spec, digit);

    return 0;
}
