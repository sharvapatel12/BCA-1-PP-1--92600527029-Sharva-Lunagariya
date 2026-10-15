//WAP that print first 10 natural number with its square and cube
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();

	printf("Nmuber \tSquare \tCube\n");
	printf(" using for loop\n");
	for(i=1;i<=10;i++)
	{
		printf(" %d \t%d \t%d \n",i,i*i,i*i*i);

	}

	printf(" using while loop\n");
	j=1;
	while(j<=10)
	{
		printf(" %d \t%d \t%d \n",j,j*j,j*j*j);
		j++;
	}
	getch();
}