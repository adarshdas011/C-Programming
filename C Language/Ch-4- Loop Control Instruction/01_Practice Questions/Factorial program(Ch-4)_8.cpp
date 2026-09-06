             //factorial for loop program
#include<stdio.h>
int main()
{
	int n,i,factorial=1;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	factorial=factorial*i;
}
printf("factorial= %d\n",factorial);
return 0;
}

             //factorial while loop program
	/*/ #include<stdio.h>
    int main()
    {
	int n,i=1,factorial=1;
	printf("Enter the number:");
	scanf("%d",&n);
	while(i<=n){
		factorial=factorial*i;
		i++;
	}
	printf("factorial=%d",factorial);
    return 0;
    }  /*/
