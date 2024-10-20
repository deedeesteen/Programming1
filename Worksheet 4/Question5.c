#include <stdio.h>
#include <stdlib.h>

int main()
{
	double price, discount_amount, discount_price;
	char price_code;
	printf("Enter the price of item: ");
	scanf("%lf", &price);
	printf("\nEnter the pricing code: ");
	scanf("%s", &price_code);
	switch(price_code)
	{
		case 'H':
			discount_amount=price*0.50;
			discount_price=price-discount_amount;
			printf("\nOriginal price: %.2lf", price);
			printf("\nDiscount amount: %.2lf", discount_amount);
			printf("\nDiscounted price: %.2lf", discount_price);
			break;
		case 'F':
			discount_amount=price*0.40;
			discount_price=price-discount_amount;
			printf("\nOriginal price: %.2lf", price);
			printf("\nDiscount amount: %.2lf", discount_amount);
			printf("\nDiscounted price: %.2lf", discount_price);
			break;
		case 'T':
			discount_amount=price*0.33;
			discount_price=price-discount_amount;
			printf("\nOriginal price: %.2lf", price);
			printf("\nDiscount amount: %.2lf", discount_amount);
			printf("\nDiscounted price: %.2lf", discount_price);
			break;
		case 'Q':
			discount_amount=price*0.25;
			discount_price=price-discount_amount;
			printf("\nOriginal price: %.2lf", price);
			printf("\nDiscount amount: %.2lf", discount_amount);
			printf("\nDiscounted price: %.2lf", discount_price);
			break;
		case 'Z':
			printf("\nNo Discount!!");
			break;
		default:
			printf("\nINVALID PRCING CODE");
			break;
	}
return 0;
}
