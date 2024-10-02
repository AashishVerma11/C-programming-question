/* 5) EligibleForVoteOrNot [ if - else ]
Write a C program to read name and age of person and by age check the person is eligible for vote or not using if-else. */

#include <stdio.h>

int main()
{
    char name[10];
    int age;

    printf("Enter your name: \n");
    scanf("%s", name);

    printf("Enter your age: \n");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("hi %s you are eligible to vote.", name);
    }
    else
    {
        printf("Sorry %s you are not eligible to vote. ");
    }
}