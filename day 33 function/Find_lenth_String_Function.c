/*
Que 3 :
=======

Write a function to find the length of a given string (excluding the null character).

-> create int main() function
-> create int getLength(char str[]) function. this function will return length of string
-> in main function read String and call the getLength fuction and print the output.

Sample input : Hello
Sample output: Length of the string: 5


Sample input : ThisIsALongString
Sample output: Length of the string: 17
*/

#include <stdio.h>

int getLength(char str[]);

int main()
{

    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length of the string : %d", getLength(str));
}

int getLength(char str[])
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    return length;
}
