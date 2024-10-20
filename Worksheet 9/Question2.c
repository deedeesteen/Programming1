#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num=50, count=0, square, cube;
	for (num=50;num<=100;num++)
	{
		square=num*num;
		cube=num*num*num;
		printf("%d squared is %d.", num, square);
		printf("\n%d cubed is %d.\n\n", num, cube);
	}
	return 0;
}
