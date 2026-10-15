//WAP that print 2 4 6....20
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();

	printf("\n using for loop");
	for(i=2; i<=20; i += 2)
	{
		printf("\t %d ",i);
	}
		printf("\n using while loop");

	j=2;
	while(j<=20)
	{
		printf("\t %d",j);
		j++;
	}
	getch();
}