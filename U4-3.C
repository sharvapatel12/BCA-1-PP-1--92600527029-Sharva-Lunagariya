//WAP that print 1 3 5 7....N
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n;
	clrscr();
	printf("\n Enter the value of N:");
	scanf(" %d ", &n);

	printf("\n using for loop");
	for(i=1; i<=n; i=i+2)
	{
		printf("\t %d ",i);
	}

		printf("\n using while loop");

	j=1;
	while(j<=n)
	{
		printf("\t %d",j);
		j=j+2;
	}
	getch();
}