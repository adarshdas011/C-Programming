#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a Character:");
	scanf("%c",&ch);
	if(ch >= '0' && ch <= '9'){
		printf("The Charcter is a digit\n");
	}
	else {
		printf("The Chracter is not a digit");
	}
	return 0;
}
