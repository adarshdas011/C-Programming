#include<stdio.h>
int main()
{
	int a=35, b=15, c=6, d=9;
	if(a>b && a>c && a>d){
	printf("The greatest of all is %d\n",a);
}
else if (b>a && b>c && b>d){
printf("The greatest of all is  %d\n",b);	
}
else if(c>a && c>b && c>d){
printf("The greatest of all is %d\n",c);
}
else if(d>a && d>c && d>b){
	printf("The greatest of all is %d\n",d);
}
return 0;
}

