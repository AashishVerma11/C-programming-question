/*3) Without using control statement write a c program to determine the next or previous multiple of 10 for a given two-digit number.
--------------
conditon-
if the last digit of given number is greater than or equal to 5, the program should print the next multiple of 10.

if the last digit of given number is less than 5 the program should print the previous multiple of 10..


sample input1 : int a=34;
sample output : 30

sample input2 : int a=25
output2: 30

sample input3 : int a=86
output3: 90  */


#include<stdio.h>

void main(){
    int n =25,rem;
    rem = n%10;
    n= n/10;
    rem>=5 && printf("%d",(n+1)*10) || n<5 && printf("%d", n*10);
 
    // printf("%d", ((a%10)/5 + a/10)*10);
}
