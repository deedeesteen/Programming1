#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num=10, count=0;
	for (count=1;count<=12;count++)
	{
		printf("%d x %d = %d\n", num, count, num*count);
	}
	return 0;
}
