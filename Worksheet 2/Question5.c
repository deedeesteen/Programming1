#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sell_price, cost_price, profit, profit_percent;
	printf("Enter the selling price: ");
	scanf("%f", &sell_price);
	printf("Enter the cost price: ");
	scanf("%f", &cost_price);
	profit=sell_price-cost_price;
	profit_percent=profit*0.100;
	printf("\nThe profit in percentage is: %.2f%%", profit_percent);
	return 0;
}
