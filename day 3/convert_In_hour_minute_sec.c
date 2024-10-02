/* 2) Write a program to take input for seconds from the user , And convert it into Hour, Minutes , Second format.

Enter the number of seconds: 3671

3671 seconds is equivalent to
1 hours
1 minutes
and 11 seconds. */

#include <stdio.h>
int main()
{
    int seconds = 0;
    int minutes = 0;
    int hours = 0;

    printf("Enter the seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;

    minutes = (seconds - 3600) / 60;

    seconds = (seconds - 3600 - 60);

    printf("%d hours\n %d minutes\n %d seconds", hours, minutes, seconds);
}
