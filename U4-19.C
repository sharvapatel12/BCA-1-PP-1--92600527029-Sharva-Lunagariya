//WAP that input number and find out factorial of given number
#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i;
	long long fact =1;
	clrscr();


	printf("\n Enter a number:");
	scanf("%d",&n);
	if(n<0)
	printf("factorial is not defined for negative number");
	else
	{
		for(i=1;i<=n;i++)
		fact=fact*i;
	}
		printf("\n factorial=%lld",fact);
	getch();



}