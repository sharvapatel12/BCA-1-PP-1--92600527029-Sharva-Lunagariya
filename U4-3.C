//WAP that print 1 3 5 7....N
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	clrscr();
	printf("\n Enter the value of N:");
	scanf(" %d ", &n);
	for(i=1; i<=n; i=i+2)
	{
		printf("%d ",i);
	}
	getch();
}