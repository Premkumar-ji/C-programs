#include<stdio.h>
void main()
{ 
	int a,b,i=2;
	printf("\nenter the number :   ");
	scanf("%d",&a);
	while(i<=(a/2))
	{
		if(a%i==0)
		{
			printf("\nnumber is not a prime number");
			return 0;	  	
		}
		i=i+1;	
	}
	if(i==(a/2)+1)   //there is +1 because the while loop adds a more +1 value to "i" a the last call
	{
	    printf("\nnumber is prime");
	}
}
