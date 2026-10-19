//WAP to find out aremstrong number s upto user series
#include<stdio.h>
#include<conio.h>

void main()
{
       int n,i,num,rem,sum;
       clrscr();

       printf("\n Enter the limit:");
       scanf("%d",&n);

       printf("\n Armstrong number are:");

       for(i=1;i<=n;i++)
       {
		num=i;
		sum=0;

		while(num>0)
		{
			rem=num%10;
			sum=sum+(rem*rem*rem);
			num=num/10;
		}

		if(sum==i)
		{
			printf(" %d ",i);
		}

       }
       getch();

}