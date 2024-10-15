/* 2 )TriangleIsEquilateralIsoscelesORScaleneTriangle
Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
  
         Validity Check:
         If all three sides are equal then the triangle is equilateral.
         If exactly two sides are equal then the triangle is isosceles.
         If all sides are different then the triangle is scalene.

Sample input :  Enter the lengths of the three sides of the triangle:
                Side 1: 3
                Side 2: 3
                Side 3: 3
Sample output : The triangle is equilateral. */

#include<stdio.h>

int main(){
    int side1, side2, side3;

    printf("Enter the lengths of three sides of the triangle: \n");
    scanf("%d%d%d", &side1,&side2,&side3);

    if(side1==side2 && side2==side3){
        printf("the triangle is equilateral\n");
    } else if(side1== side2 || side1==side3 || side2==side3){
        printf("the triangle is isosceles\n");
    }else{
        printf("The triangle is scalene\n");
    }

    return 0;
}
