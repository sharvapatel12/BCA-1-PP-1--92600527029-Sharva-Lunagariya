//WAP that takes 3 value for principle amount, rate of interest and number of years
#include<stdio.h>
#include<conio.h>

void main()
{
	float a,b,c,d;
	clrscr();
	printf("\n *********************");

	printf("\n Enter the principle amount:");
	scanf("%f",&a);

	printf("\n Enter the rate of interest:");
	scanf("%f",&b);

	printf("\n Enter the number of years:");
	scanf("%f",&c);

	d= a * b * c / 100;

	printf("\n simple interest is %f" ,d);

	printf("\n ***********************");

	printf("\n Principal Amount : %.2f",a);

	printf("\n Rate of Interest : %.2f",b);

	printf("\n Number of years : %.2f",c);

	printf("\n ************************");

	printf("\n simple interest is : %.2f",d);
	getch();

}