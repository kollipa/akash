#include<stdio.h>
int palindrom();
int main()
{
	palindrom();
}
int palindrom()
{
	int n,r,sum=0,temp;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(temp==sum)
	printf("palindrom");
	else
	printf("not palindrom");
	return(0);
		
	
}

