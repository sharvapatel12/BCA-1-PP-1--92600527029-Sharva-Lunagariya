//WAP to find out prime number upto user series
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j,k;
	clrscr();
	printf("\n Enter a number:");
	scanf("%d",&n);

	printf("\n Prime numbers are:");

	for(i=2;i<=n;i++)
	{
		k=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				k=1;
				break;
			}
		}
		if(k==0)
			printf(" %d ",i);
	}
	getch();
}
