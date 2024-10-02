#include <stdio.h>

int main()
{

    int wheeler, age, problem, tyre, tyreCost;
    char name[20];
    char vehicle[30];
    char issue[30];

    printf("Enter your name: \n");
    scanf("%s", name);
    printf("Enter vehicle Name: \n");
    scanf(" %s", vehicle);

    printf("Enter what is issue in your vehicle\n");
    scanf(" %s", issue);

    printf("Enter wheeler of your vehicle like  2 wheeler ,3 wheeler & 4 wheeler : \n");
    scanf("%d", &wheeler);

    if (!(wheeler == 2 || wheeler == 3 || wheeler == 4))
    {
        printf("This service center is not accepting other than 2 wheeler, 3 wheeler and 4 wheeler ");
    }
    else if (wheeler == 2 || wheeler == 3 || wheeler == 4)
    {
        printf("What is the age of the vehicle \n");
        scanf("%d", &age);
        if (age > 8)
        {
            printf("Enter 1 for tyre problem \n");
            printf("Enter 2 for fuel problem \n");
            printf("Enter 3 for engine issue \n");
            printf("Enter 4 for genral service \n");
            scanf("%d", &problem);
            if (problem == 1)
            {
                printf("how many tyers you are facing the issue? ");
                printf("enter tyre no. :\n");
                tyreCost = 400;
                scanf("%d", &tyre);
                int total_tyreCost = 400 * tyre;
                printf("-------------------------Your bill---------------------------- \n");
                printf("Owener name = %s\n", name);
                printf("vehicle name = %s\n", vehicle);
                printf("Issue= %s\n", issue);
                printf("Bill %d", total_tyreCost);
            }
            else if (problem == 2)
            {
                int total_fuelCost = 1500;
                printf("-------------------------Your bill---------------------------- \n");
                printf("Owener name = %s\n", name);
                printf("vehicle name = %s\n", vehicle);
                printf("Issue= %s\n", issue);
                printf("Bill %d", total_fuelCost);
            }
            else if (problem == 3)
            {
                int total_engineCost = 1500;
                printf("-------------------------Your bill---------------------------- \n");
                printf("Owener name = %s\n", name);
                printf("vehicle name = %s\n", vehicle);
                printf("Issue= %s\n", issue);
                printf("Bill %d", total_engineCost);
            }
            else if (problem == 4)
            {
                int total_general_service = 1000;
                printf("-------------------------Your bill---------------------------- \n");
                printf("Owener name = %c\n", name);
                printf("vehicle name = %c\n", vehicle);
                printf("Issue= %c\n", issue);
                printf("Bill %d", total_general_service);
            }
        }
    }
    else
    {
        printf("your vehicle servie will done after a while.");
    }

    return 0;
}