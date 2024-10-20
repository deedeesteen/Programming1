#include <stdio.h>
#include <stdlib.h>

int main()
{
	float testg1, testg2, testg3, testg4, total_grade, ave_grade, class_count;
	do
	{
		printf("Enter the student's first test grade: ");
		scanf("%f", &testg1);
		total_grade=total_grade+testg1;
		printf("Enter the student's second test grade: ");
		scanf("%f", &testg2);
		total_grade=total_grade+testg2;
		printf("Enter the student's third test grade: ");
		scanf("%f", &testg3);
		total_grade=total_grade+testg3;
		printf("Enter the student's fourth test grade: ");
		scanf("%f", &testg4);
		total_grade=total_grade+testg4;
		ave_grade=total_grade/4;
		printf("\nThe average grade for the student is %.2f.\n\n", ave_grade);
		class_count++;
	} while (class_count<=10);
	return 0;
}
