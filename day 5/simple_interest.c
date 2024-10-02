/*1) Program:1
Calculate simple interest
Description:
Create a program that takes the principal amount, interest rate, and time in years from the user and calculates the simple interest. Print the result with appropriate messages.
Constraints:
SampleInput:
principal amount: 4000

interest rate (in percentage): 5

time in years: 3
SampleOutput:
Simple Interest is: 600.00
Explanation:
By using the formula. */

#include<stdio.h>

int main(){
    int time;
    float pa, ir, simpleInterest;

    printf("Enter principal amount interest rate and time in year: "); 
    scanf("%f %f %d",&pa, &ir,&time);
    float irp = ir/100;

    simpleInterest = pa * irp * time;
    printf("Simple Interest is %.2f",simpleInterest);
  
    return 0;
}