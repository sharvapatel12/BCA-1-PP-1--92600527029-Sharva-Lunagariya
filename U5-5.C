//WAP to find out number is palidrome or not using UDF
#include<stdio.h>
#include<conio.h>

int num(int n);
void main()
{
	int n,rem,rev,temp;
	clrscr();

	printf("\n Enter a number:");
	scanf("%d",&n);

	num(n);

	getch();
}
int num(int n)
{
	int rem1,rev1=0,temp1;
	temp1=n;
	while(n>0)
	{
		rem1=n%10;
		rev1=rev1*10+rem1;
		n=n/10;
	}
	printf("\n reversed number is %d",rev1);

	if(temp1==rev1)
	{
		printf("\n Number is palindrome:");
	}
	else
	{
		printf("\n Number is not palindrome:");

	}
}