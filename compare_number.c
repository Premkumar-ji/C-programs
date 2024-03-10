#include<stdio.h>
void check();
void main()
{
	check();
}
void check()
{
	int x,y;
	printf("enter x & y");
	scanf("%d%d",&x,&y);
	if(x>y)
	printf(" X is greater\n");
	else if(x<y)
	printf("Y is greater\n");
	else
	printf("both are equal\n");
}
