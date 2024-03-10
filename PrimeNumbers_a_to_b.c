#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,j,fact=0,sum=0,l,f;
	char T;
	repeat:
	printf("enter the positive digit between you want to take out prime number :-\n");
	printf("enter the starting number :-  ");
	scanf("%d",&f);
	printf("enter the ending number :-  ");
	scanf("%d",&l);
	int store=f;
	if(l<=1||f<=1)
{
		if(f==0)
		f+=2;
		else if(f==1)
		f++;
		if(l==1||l==0)
		{
			printf("\n\nEnter a greater number for finding prime number");
			return 0;
		}
}
	for(i=f;i<=l;i+=1)
	{
		
		for(j=2;j<=(i/2);j++)
		{
			if(i%j==0)
			{
			fact+=1;
			break;
			}
		}
		if(fact==0)
		{
		 printf("%d\n",i);
		 sum+=pow(i%10,3);
	    }
		fact=0;
    }
    printf("sum of the cube of the last digit of the prime number between %d to %d is  = %d\n",store,l,sum);
    printf("\nEnter Y if you again want to find the prime number else press N or any digit  :");

	scanf("%s",&T);
    if(T=='y'||T=='Y')
    goto repeat;
    else 
    printf("**********END**********");
   return 0; 
}