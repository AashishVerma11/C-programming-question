/* 3)GradingManagement
Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
Calculate percentage and grade according to following:

Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F

Sample input :
Enter marks of Physics: 85
Enter marks of Chemistry: 78
Enter marks of Biology: 92
Enter marks of Mathematics: 88
Enter marks of Computer: 95

Sample output :
Total Marks = 438.00/500
Percentage = 87.60%
Grade = B */

#include <stdio.h>

int main()
{
    int phy, che, bio, math, comp;
    float total_marks, percentage;

    printf("Enter marks of Physics: \n");
    printf("Enter marks of chemistry: \n");
    printf("Enter marks of Biology: \n");
    printf("Enter marks of Mathematics: \n");
    printf("Enter marks of Computer: \n");

    scanf("%d %d %d %d %d", &phy, &che, &bio, &math, &comp);

    total_marks = phy + che + bio + math + comp;
    percentage = total_marks / 5;

    printf("Total Marks = %.2f/500\n", total_marks);
    printf("Percentage =%.2f %%\n", percentage);

    if (percentage >= 90)
    {
        printf("Grade A");
    }
    else if (percentage >= 80)
    {
        printf("Grade B");
    }
    else if (percentage >= 70)
    {
        printf("Grade C");
    }
    else if (percentage >= 60)
    {
        printf("Grade D");
    }
    else if (percentage >= 50)
    {
        printf("Grade E");
    }
    else if (percentage < 40)
    {
        printf("Grade F");
    }
    else
    {
        printf("fail");
    }

    return 0;
}