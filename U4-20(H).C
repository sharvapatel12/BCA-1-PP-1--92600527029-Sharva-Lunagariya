//WAP to display following pyramid using loop(H)
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n;
	clrscr();

	printf("\n Enter number of rows:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{

		for(j=i;j<=n;j++)
		{
			printf("%d ",j);

		}
		printf("\n");
	}
	getch();
}
