#include<stdio.h>
int main()
{
	int num1;
	printf("Enter number:");
	scanf("%d",&num1);
	if(num1%5==0 && num1%7==0){
		printf("True\n");
	}
	else{
		printf("False\n");
	}
	return 0;
}
