#include <stdio.h>
int main ()
{
	int marks;
	printf("Enter Marks:");
	scanf("%d", &marks);
	switch (marks)
	{
		case 100:
		case 90: printf("Your Grades Are Excellent"); break;
		case 80:
		case 70: printf("Your Grades Are Good"); break;
		case 60: 
		case 50: printf("Your Grades Are Average"); break;
		case 40: 
		case 30: 
		case 20: 
		case 10: 
		case 00: printf("Your Grades Are Very Poor"); break;
		default: printf("Please Enter Valid Marks!");
	}
	return 0;
}
