//WAP that input 2 value from user and check both are equal or not
#include<stdio.h>
#include<conio.h>

void main ()
{
	int x,y;
	clrscr();

	printf("\n Enter any 2 number:");
	scanf("%d%d",&x,&y);

	if(x==y)
	{
		printf("both are equal");

	}
	else
	{
		printf("both are not equal");
	}
	getch();


}

