//WAP to print multiplication table of inputted number
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,N;
	clrscr();

	printf("\n Enter value of N:");
	scanf("%d",&N);

	for(i=1; i<=10; i++)
	{
		printf("\n %d*%d\n",N,i,N*i);
	}
	getch();
}