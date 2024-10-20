#include <stdio.h>
#include <stdlib.h>

int main()
{
	double grade, total_grade=0, ave_grade, class_count=1;
	while (class_count<=10)
	{
		printf("Enter the student's grade: ");
		scanf("%lf", &grade);
		total_grade=total_grade+grade;
		class_count++;
	}
	ave_grade=total_grade/10;
	printf("\nThe class average grade is %.2lf.", ave_grade);
	return 0;
}
