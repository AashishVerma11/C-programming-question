#include<stdio.h>
#include<conio.h>

int main(){
    int quantity =0;
    float price =0;
    float totalCost =0;

    printf("<----Welcome to you in our bakery shop---->\n");
 
    printf("Enter the quantity you want to purchase: \n");
    scanf("%d", &quantity);

    printf("Enter the price of chocolate cake: \n");
    scanf("%f",&price);
   
    totalCost = quantity * price;

    printf("Quantity: %d\n",quantity);
    printf("Price per item: Rs.%f\n", price);
    printf("total cost: %f\n", totalCost);

    getch();
    printf("thank-you for shopping at our bakery shop\n");

   return 0;
}

