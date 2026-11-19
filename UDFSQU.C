//Demo of UDF which will calculate sum of two numbers
#include<stdio.h>
#include<conio.h>

int square(int a);    //function prototype declaration

void main()
{
	int x,y;
	clrscr();
	printf("\n Enter any number : ");
	scanf("%d",&x);
	y=square(x);   //function calling
	printf("\n Squareis %d",y);

		//y = cube(x);
		//printf(/n Cube is %d",y);
	getch();
}

int cube(int a)
{
	int b;
	b= a * a * a;
	return(b);
}

int square(int a)    //function header
{
	int b;
	//function body
	b= a * a;
	return(b);
}