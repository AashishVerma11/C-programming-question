/*  7 )  EligibleForVoteOrNot [ Simple if ]
Write a C program to read name and age of person and by age check the person is eligible for vote or not using simple (if) only.

Sample input  : Enter your age: 16
Sample output : Sorry Kishor you are not eligible to vote. */

#include <stdio.h>

int main()
{
    char name[20];
    int age;

    printf("Enter your name: \n");
    scanf("%s", &name);

    printf("Enter your age: \n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Hi %s you are eligible to vote.", name);
    }

    if (age < 18)
    {
        printf("Sorry %s you are not eligible to vote.", name);
    }

    return 0;
}