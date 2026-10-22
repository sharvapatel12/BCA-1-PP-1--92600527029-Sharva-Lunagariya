//Demo of do while loop
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z,i=1;
	char ch;
	clrscr();

	do
	{
		printf("\n Enter the value of x:");
		scanf("%d",&x);

		printf("\n Enter the value of y:");
		scanf("%d",&y);

		z=x+y;
		printf("\n sum is : %d",z);

		printf("\n Do you want to continue (Y/N) :");
		ch=getche();

	}while(ch=='Y'|| ch=='y');

	getch();


}