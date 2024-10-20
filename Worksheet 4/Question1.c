#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	printf("Enter number: ");
	scanf("%d",&num1);
	if (num1%7==0)
	{
		if (num1%2==0)
		{
			printf("\nTrue");
		}
	}
return 0;
}
