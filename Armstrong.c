#include<stdio.h>
void main()
{
	int n,c,arm=0,r;
	printf("enter any number :");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
	}
	if(c==arm)
	printf("  %d  is a Armstrong number ",c);
	else
	printf(" %d is not a armstrong number ",c);
	
}