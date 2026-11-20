// WAP to find out number is armstrong or not using UDF
#include<stdio.h>
#include<conio.h>

int arm(int n);

void main()
{
	int n,rem,temp,sum;
	clrscr();

	printf("\n Enter any number :");
	scanf("%d",&n);
	arm(n);



	getch();
}
int arm(int n)
{         int rem1,sum1=0,temp1;
	  temp1=n;
	  while(n>0)
	{
		rem1=n%10;
		sum1=sum1+rem1*rem1*rem1;
		n=n/10;
	}

	if(temp1==sum1)
	{
		printf("\n Number is Armstrong:");
	}
	else
	{
		printf("\n Number is not Armstrong:");

	}
}