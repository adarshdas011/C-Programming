#include<stdio.h>
int main()
{
	float amount,percent,result;
	printf("Enter amount\n");
	scanf("%f",&amount);
	printf("Enter percent\n");
	scanf("%f",&percent);
	result=(percent/100)*amount;
	printf("%.2f percent of %.2f is= %.2f",amount,percent,result);
	return 0;
}

