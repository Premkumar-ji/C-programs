#include<stdio.h>
#include<math.h>
void main()
{
	int f=1,fact=1,a;
		printf("enter the number you want to get factorial of :\n=");
		scanf("%d",&a);
		
		printf("\n%d*%d*....*1 =  ",a,a-1);
		while(f<=a)
		{
				fact=fact*f;
				f++;
		}
		printf("%d\n\n\n",fact);
}