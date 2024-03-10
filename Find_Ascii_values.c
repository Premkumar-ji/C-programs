//enter the  ascii number and find the character
#include<stdio.h>
void main()
{
	char r;
	int a,n;
	start:
	printf("Enter the digit to find the Ascii code:  ");
	scanf("%d",&n);
	printf("Your Ascii code is = %c",n);  //	Nowadays C compiler automatically converts Type Conversion 
	printf("\n\nIf you want to find other codes click Y else click any other digit: ");
	scanf("%s",&r);
	if(r=='Y'||r=='y')
	{
		goto start;
	}
	else
	printf("\n\n--------------------------------------End-----------------------------------------------");
}