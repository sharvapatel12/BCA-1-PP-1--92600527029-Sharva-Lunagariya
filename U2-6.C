//WAP that input 3 values from user and find out its average
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d,total;
	clrscr();
	printf("\n Enter value of a,b,c:");
	scanf("%d%d%d",&a,&b,&c);

	total= a + b + c;

	d= total / 3 ;
	printf("\n Average %d",d);
	getch();


}