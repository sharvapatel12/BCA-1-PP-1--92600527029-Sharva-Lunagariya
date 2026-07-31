//WAP to input your percentage and display whether your result is pass or fail
#include<stdio.h>
#include<conio.h>
void main()
{
	float x;
	clrscr();
	printf("\n Enter your percentage:");
	scanf("%f",&x);

	if(x<35)
	{
		printf("\n fail");
	}
	else
	{
		printf("\n pass");
	}
	getch();

}
