/* 3)Program:
Split the Bill
Description:
Write a program that takes the total bill amount and the number of people from the user. Calculate and print the amount each person needs to pay, assuming an equal split of the bill.
Constraints:
SampleInput:
Input :

-------

total bill( in float) ->1200.00

number of people(in int)-> 5
SampleOutput:
Output :

--------

amount each person needs to pay ->240
Explanation:
Note : you have to print the msg as it is shown in the example. */

#include<stdio.h>
int main(){
    float Totalbill;
    int Numberofpeople;
    scanf("%f%d",&Totalbill,&Numberofpeople);
    printf("Amount each person needs to pay - >%.0f",Totalbill/Numberofpeople);
    return 0;
}
