#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count=0;
	while (count<=12)
	{
		printf("5 x %d = %d\n", count, 5*count);
		count=count+1;
	}
	return 0;
}
