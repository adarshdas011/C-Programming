            //while loop program
     #include<stdio.h>
     int main()
    {
	int n,i=1,sum=0;
	printf("Enter number:");
	scanf("%d",&n);
	while(i<=n){
		sum=sum+i;
		i++;
	}
	printf("sum of first natural number=%d",sum);

    return 0;
    }

              //do while loop program
/*/  #include<stdio.h>
     int main()
    {
	int n,i=1,sum=0;
	printf("Enter number:");
	scanf("%d",&n);
	do{
		sum=sum+i;
		i++;
	}
	while(i<=n);
	printf("Sum of natural numbers=%d",sum);
	return 0;
    }
    
             //For loop program
    #include<stdio.h>
    int main()
    {
	int n,i,sum=0;
	printf("Enter number:");
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		sum=sum+i;
	}
	printf("Sum of natural number is =%d\n",sum);
	return 0;
    }
