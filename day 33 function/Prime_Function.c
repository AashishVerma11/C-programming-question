/*
Que 2 :
=======

Write a program in C to check whether a number is a prime number or not by using the function.

-> create int main() function.
-> create int isPrime(int n) function.
-> in main function read one number and call isPrime(int n) function. here isPrime(int n) function will perform the operation and will return 1 or 0 to the main function.
-> in main function catch the int result and according that print the proper Output.

Example 1:
Sample input : Input a positive number : 5
Sample output : The number 5 is a prime number.

Example 2:
Sample input : Input a positive number : 6
Sample output : The number 6 is not a prime number.

*/

#include <stdio.h>

int isPrime(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    isPrime(num);
    if (isPrime(num) == 1)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Composite Number");
    }
}

int isPrime(int num)
{
       if (num <= 1)  
        return 0;
        
    int c = 1;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            c = 0;
        }
    }
    if (c == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
