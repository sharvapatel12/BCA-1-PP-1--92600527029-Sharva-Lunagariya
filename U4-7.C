//WAP to print multiplication table of inputted number
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,N;
	clrscr();

	printf("\n Enter value of N:");
	scanf("%d",&N);
	printf("\n using for loop");
	for(i=1; i<=10; i++)
	{
		printf("\n%d*%d",N,i,N*i);
	}
	printf("\n using while loop");
	j=1;
	while(j<=10)
	{
		printf("\n%d*%d",N,j,N*j);
		j++;
	}
	getch();
}