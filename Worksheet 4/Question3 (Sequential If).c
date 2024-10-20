#include <stdio.h>
#include <stdlib.h>

int main()
{
	int investType;
	printf("Enter the investment type: ");
	scanf("%d", &investType);
	if (investType==1)
	{
		printf("\nStocks");
	}
	if (investType==2)
	{
		printf("\nBonds");
	}
	if (investType==3)
	{
		printf("\nMutual Funds");
	}
	if (investType>3)
	{
		printf("\nInvalid");
	}
return 0;
}
