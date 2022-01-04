#include<stdio.h>
int main()
{
	int a,b,i,f,s,j;
	scanf("%d%d",&a,&b);
	s=0;
	for(i=a;i<=b;i++)
	{
		f=1;
		for(j=1;j<=i;j++)
		{
			f=f*j;
		}
		s=s+f;
	}
	printf("%d",s);
}
