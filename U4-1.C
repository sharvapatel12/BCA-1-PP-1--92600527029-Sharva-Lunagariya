//WAP that print 1 2 3 4......10
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();

	printf("\n using for loop");
	for(i=1; i<=10; i++)
	{
		printf("\t %d ",i);
	}
		printf("\n using while loop");
	j=1;
	while(j<=10)
	{
		printf("\t %d",j);
		j++;
	}

	getch();
}