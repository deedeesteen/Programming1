#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    z=x*y;
    printf("\nThe product is: %d", z);
    return 0;
}
