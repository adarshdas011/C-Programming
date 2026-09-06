#include<stdio.h>
int main()
{
	int physics,chemistry,maths;
	float percentage;
	printf("Enter physics number\n");
	scanf("%d",&physics);
	printf("Enter chemistry number\n");
	scanf("%d",&chemistry);
	printf("Enter maths number\n");
	scanf("%d",&maths);
	percentage= (maths+physics+chemistry)/300.0*100;
	printf("Percentage=%f",percentage);
	return 0;
}

