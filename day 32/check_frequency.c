/*
Que 2 :
=======

Write a c program to print all the frequency of character present in string .

Sample input: String s=" Hello Everyone"

Sample output  :-
The frequency of H is 1
The frequency of e is 3
The frequency of l is 2
The frequency of o is 2
The frequency of   is 1  --------THIS IS FOP CHECKING THE SPACE COUNT
The frequency of E is 1
The frequency of v is 1
The frequency of r is 1
The frequency of y is 1
The frequency of n is 1
*/

#include <stdio.h>

int main()
{
    char a[100];
    int b[100] = {0};
    int length = 0;

    printf("Enter the string: ");
    scanf("%[^\n]", a);

    printf("Original String: %s\n", a);

    while (a[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < length; i++)
    {
        if (b[i] == 0)
        {
            int count = 1;
            for (int j = i + 1; j < length; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                    b[j] = -1;
                }
            }
            b[i] = count;
        }
    }

    for (int i = 0; i < length; i++)
    {
        if (b[i] != -1)
        {
            printf("The frequency of %c is %d\n", a[i], b[i]);
        }
    }

    return 0;
}
