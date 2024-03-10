#include<stdio.h>
#include<math.h> 
#include<conio.h>
void main()
{
		float a,b,c,s;
		
		printf("enter the sides of scalene triangle :\n");
		scanf("%f",&a);
		scanf("%f",&b); 
		scanf("%f",&c);
		s=(a+b+c)/2;
		printf("by heron's formula area of triangle : %f",sqrt(s*(s-a)*(s-b)*(s-c)));
		
}