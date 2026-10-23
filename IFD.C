//WAP which display day in text as per inputer day number
#include<stdio.h>
#include<conio.h>

void main()
{
	char day ;
	clrscr();

	printf("\n Enter day ");
	scanf("%c",&day);


			if(day=='M'|| day=='m')
			{
				printf("Monday");
			}
			else if(day=='U'|| day=='u')
			{
				printf("Tuesday");
			}
			else if(day=='W'|| day=='w')
			{
				printf("Wednesday");
			}
			else if(day=='T'|| day=='t')
			{
				printf("Thursday");
			}
			else if(day=='F'|| day=='f')
			{
				printf("Friday");
			}
			else if(day=='S'|| day=='s')
			{
				printf("Saturday");
			}
			else if(day=='Y'|| day=='y')
			{
				printf("Sunday");
			}
			else
			{
				printf("Invalid day number");
			}

	getch();
}