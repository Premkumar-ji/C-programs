#include<stdio.h>
void main()
{
		int a,b;
		printf("enter the two number you want to convert to GCD :\n");
		scanf("%d%d",&a,&b);
		while(a!=b)
	{
		if(a>b)
		a=a-b;
		else if(b>a)
		b=b-a;
	}
printf("GCD = %d",a);


















}























