//WAP to find out addition of two values using UDF
#include<stdio.h>
#include<conio.h>

int sum(int a,int b);

void main()
{
	int x=2, y=5,z;

	clrscr();

	z= sum(x,y);
	printf("\n Answer is : %d",z);

	getch();
}
int sum(int a, int b)
{
	int c;
	c= a+ b;
	return(c);
}