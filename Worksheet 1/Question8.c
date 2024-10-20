#include <stdio.h>
#include <stdlib.h>

int main()
{
	float cost, GCT, GCT_amount, change;
	GCT=0.175;
	printf("Enter price of item: ");
	scanf("%f", &cost);
	GCT_amount=cost+(cost*GCT);
	change=1000-GCT_amount;
	printf("\nThe amount of GCT to be paid is: %.2f", GCT_amount);
	printf("\nThe amount of change to be given is: %.2f", change);
	return 0;
}
