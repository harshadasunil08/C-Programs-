#include <stdio.h>
int main()
{
	int H,M,t;
	printf("Enter Two Numbers:");
	scanf("%d %d", &H, &M);
	printf("Before Swapping: H= %d  M= %d\n", H, M);
	t=H;
	H=M;
	M=t;
	printf("After Swapping: H= %d  M=%d\n", H, M);
	return 0;
}
