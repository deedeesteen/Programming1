#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	printf("Enter number: ");
	scanf("%d",&num1);
	if (num1%7==0)
	{
		printf("\nTrue");
	}
	else if (num1%2==0)
	{
		printf("\nTrue");
	}
	else
		printf("\nNot true")
return 0;
}
