#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num=50, square, cube;
	do
	{
		square=num*num;
		cube=num*num*num;
		printf("The square root of %d is %d.\n", num, square);
		printf("The cube of %d is %d\n\n", num, cube);
		num=num+1;
	} while (num<=100)
	return 0;
}
