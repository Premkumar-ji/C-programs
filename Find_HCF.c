#include<stdio.h>
void main()
{
		int a,b,i=2,hcf;
		scanf("%d",&a);
		scanf("%d",&b);
		while(i<a||i<b)
			{
					if(a%i==0&&b%i==0)
					{
						hcf=i;
					}
					i+=1;
			}		printf(" hcf = %d",hcf);
}