// WAP that input 2 values from user and find out minimum
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
	printf("\n Enter the any vlaue of a,b");
	scanf("%d%d", &a,&b);

	 if(a < b)
	{
		printf("\n A number is Minimum");

	}
	else
	{
		printf("\n A number is Maximum");

	}
	getch();


}