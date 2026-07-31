//WAP to input any 2-digit number and calculate square of both the digits
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,n1,n2,s1,s2;
	clrscr();

	printf("\n Enter any 2 digits number");
	scanf("%d",&x);

	n1=x/20;
	n2=x%20;

	s1=n1*n1;
	s2=n2*n2;

	printf("\n The square of the first digit is :%d",s1);
	printf("\n The square of the second digit is :%d",s2);
	getch();

}