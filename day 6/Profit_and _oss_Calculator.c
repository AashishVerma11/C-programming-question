#include <stdio.h>

int main()
{
    float costPrice, sellingPrice, profit_Percentage, loss_percentage;
    float profit=0;
    float loss =0;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter sellingPrice: ");
    scanf("%f", &sellingPrice);

    profit = sellingPrice - costPrice ;
    loss =    costPrice - sellingPrice;

    printf("profit=%.2f\nloss=%.2f\n", profit, loss);

    profit_Percentage = profit * 100 / costPrice;
    loss_percentage = loss * 100 /costPrice;

   printf("Profit Percentage= %.2f\nLoss Percentage= %.2f",profit_Percentage, loss_percentage);
}
