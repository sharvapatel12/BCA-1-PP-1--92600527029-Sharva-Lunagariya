//WAP that print first 10 natural number with its square and cube
#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();

	printf("Nmuber\ tSquare\ tCube\n");

	for(i=1;i<=10;i++)
	{
		printf("%d\t%d\t%d\n",i,i*i,i*i*i);

	}
	getch();
}