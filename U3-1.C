//WAP that input 2 values from user and find out its maximum
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	clrscr();
	printf("\n Enter the value of x,y");
	scanf("%d%d", &x,&y);

	if(x > y)
	{
		printf("\n A number is Maximum");

	}
	else
	{
		printf("\n A number is Maximum");

	}

	if(x==y)
	{
		printf("\n Both are same");
	}
	else
	{
		printf("\n Both are not equal");
		if(x>y)
		{
			printf("\n x is max");
		}
		else
		{
			printf("\n y is max");
		}

	}
	getch();


}