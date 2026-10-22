//WAP to display following pyramid using loop(F)
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n=5;
	clrscr();

	printf("\n Enter number of rows:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{

		for(j=5;j>=6-i;j--)
		{
			printf("%d ",j);

		}
		printf("\n");
	}
	getch();
}