//WAP that input x and y calculate its power value
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,result;
	clrscr();

	printf("\n Enter the value of x :");
	scanf("%d",&x);

	printf("\n Enter the value of y :");
	scanf("%d",&y);

	result = pow (x,y);

	printf("power=%d",result);
	getch();
}
