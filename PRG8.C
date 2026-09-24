//WAP that explain conditional operators
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,max;
	clrscr();
	printf("\n Enter any two number:");
	scanf("%d%d",&x,&y);
	(x > y)? printf("x is max"):printf("y is max");
	getch();
}