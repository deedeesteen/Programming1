#include <stdio.h>
#include <stdlib.h>

int main()
{
    double radius, diameter, circ, area;
    double PI=3.142
    printf ("Enter the radius\n");
    scanf ("radius");
    diameter=radius*2;
    circ=PI*diameter;
    area=PI*radius*radius;
    printf ("\nDiameter:", diameter);
    printf ("\nCircumference:", circ);
    printf ("\nArea:", area);
    return 0;
}
