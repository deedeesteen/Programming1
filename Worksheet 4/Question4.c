#include <stdio.h>
#include <stdlib.h>

int main()
{
	int flag;
	printf("Enter value: ");
	scanf("%d",&flag);
	if (flag==1)
	{
		printf("\nHOT");
	}
	else if (flag==2)
	{
		printf("\nLUKEWARM");
	}
	else if (flag==3)
	{
		printf("\nCOLD");
	}
	else
	{
		printf("\nINVALID VALUE");
	}
	return 0;
}
