// WAP to find out factorial of number using UDF
#include<stdio.h>
#include<conio.h>

int fact(int a);

void main()
{
	int x,ans;
	clrscr();
	printf("\n Enter any number : ");
	scanf("%d",&x);

	ans = fact(x);
	printf("\n Factorial is : %d ", ans);
	getch();
}
int fact(int a)
{
	int f=1;
	while(a>=1)
	{
		f = f * a;
		a = a - 1;
	}
	return(f);
}