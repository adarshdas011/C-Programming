#include<stdio.h>
int main()
{
	int mark1, mark2, mark3;
	float percentage;
	printf("Enter mark1:");
	scanf("%d",&mark1);
	printf("Enter mark2:");
	scanf("%d",&mark2);
	printf("Enter mark3:");
	scanf("%d",&mark3);
	if(mark1<33 || mark2<33 || mark3<33){
		printf("You are failed due to individual subjects \n");
	}
	else if((mark1+mark2+mark3)/3<40){
		printf("you are failed due to less marks\n");
	}
	else{
		printf("You are passed\n");
	}
	percentage=((mark1+mark2+mark3)/300.0*100);
	printf("percentage=%f",percentage);
return 0;
}
