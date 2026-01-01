#include <stdio.h>
int main ()
{
	int n;
	printf("Enter A Number:", n);
	scanf("%d", &n);
	
	if(n%2 == 0)
	{
		printf("Positive!");
	}
	else
	{
		printf("Negative!");
	}
	return 0;
}
