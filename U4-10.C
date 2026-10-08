//WAP that accept 10 number from user one by one and dispaly its value on screen
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,num,sum=0;
	clrscr();

	for(i=1;i<=10;i++)
	{
		printf("enter number %d:",i);
		scanf("%d",&num);

		sum=sum+num;

	}
		printf("Total=%d",sum);
		getch();

}