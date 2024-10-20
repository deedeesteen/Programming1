#include <stdio.h>
#include <stdlib.h>

int main()
{
	int investType;
	printf("Enter the investment type: ");
	scanf("%d", &investType);
	switch (investType)
	{
		case 1:
			printf("\nStocks");
			break;
		case 2:
			printf("\nBonds");
			break;
		case 3:
			printf("\nMutual Funds");
			break;
		default:
			printf("\nInvalid");
			break;
	}
return 0;
}
