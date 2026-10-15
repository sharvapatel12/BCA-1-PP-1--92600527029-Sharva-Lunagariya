//WAP to print 0 1 1 2 3 5 8 13....n
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,N,a=0,b=1,next;
	clrscr();
	printf("\n Enter value of N term :");
	scanf("%d",&N);

	printf("\n using for loop");
	for(i=3; i<=N; i++)
	{
		printf("\n %d",a);
		next = a+b;
		a=b;
		b=next;
	}
	printf("\n using while loop");
	a=0;
	b=1;
	j=3;
	while(j<=N)
	{
		printf("\n %d",a);
		next = a+b;
		a=b;
		b=next;
		j++;
	}
	getch();
}