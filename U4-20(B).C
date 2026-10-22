//WAP to display following pyramid using loop(B)
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
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	getch();
}