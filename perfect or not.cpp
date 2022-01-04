#include<stdio.h>
int perfect();
int main()
{
	perfect();
}
int perfect()
{
	int num,i,rem,sum=0;
	printf("enter the value of n");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		rem=num%i;
		if(rem==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	{
		printf("perfect number");
	}
	else
	{
		printf("not a perfect number");
	}
	return(0);
}
