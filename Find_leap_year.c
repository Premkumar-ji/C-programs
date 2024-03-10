#include<stdio.h>
void main()
{
	int year;
	printf("enter a year=\n");
	scanf("%d",&year);
	if((year%4==0)||(year%400==0)||(year%100==0))
	{
		printf("%d is a leep year",year);
	}
	else
	{
		printf("%d is not a leep year",year);
	}
}