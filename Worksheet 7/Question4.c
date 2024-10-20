#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count=0;
	do
	{
		printf("5 x %d = %d\n", count, 5*count);
		count=count+1;
	} while (count<=12);
	return 0;
}
