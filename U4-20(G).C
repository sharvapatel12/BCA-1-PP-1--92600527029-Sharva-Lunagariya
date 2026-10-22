//WAP to display following pyramid using loop(G)
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n;
	clrscr();

	printf("\n Enter number of rows:");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{

		for(j=1;j<=i;j++)
		{
			printf("%d ",j);

		}
		printf("\n");
	}
	getch();
}
