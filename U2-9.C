//WAP to interchage two number without using 3rd variable
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	clrscr();
	printf("\n Enter the value of x:");
	scanf("%d", &x);

	printf("\n Enter the value of y:");
	scanf ("%d", &y);
	printf("\n Before interchanging : x=%d , y=%d ",x,y);

	x = x+y;
	y = x-y;
	x = x-y;

	printf("\n after interchanging x =%d , y=%d" ,x,y);
	getch();



}