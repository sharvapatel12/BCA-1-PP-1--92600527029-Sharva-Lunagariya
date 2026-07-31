//WAP to input one number and check whether it is positive or negative
#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	clrscr();
	printf("\n enter any number:");
	scanf("%d",&x);

	if(x>0)
	{
		printf("\n Number is positive");

	}
	else
	{
		printf("\n Number is negative");
	}
	getch();


}