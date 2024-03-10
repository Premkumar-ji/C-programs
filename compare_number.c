#include<stdio.h>
void check();
void main()
{
	check();
	int sum( int x, int y);
//	printf("sum = %d",sum(20,20));
}
void check()
{
	int x,y;
	printf("enter x & y");
	scanf("%d%d",&x,&y);
	if(x>y)
	printf(" X is greater\n");
	else
	printf("Y is greater\n");
}

/*int sum(int x,int y)
{
	return x+y;
}*/