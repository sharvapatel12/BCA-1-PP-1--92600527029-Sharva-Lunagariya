//WAP that print 100 99 98....90
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();

	printf("\n using for loop");
	for(i=100; i>=90; i--)
	{
		printf("\t %d ",i);
	}

		printf("\n using while loop");

		j=100;
		while(j>=90)
		{
			printf("\t %d",j);
			j--;
		}
	getch();
}