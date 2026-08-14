//WAP which takes input of one charcter and display its ASCII code
#include<stdio.h>
#include<conio.h>

void main()
{
	char x;
	clrscr();
	printf("\n Enter any charcter :");
	scanf("%c",&x);

	printf("\n Input charcter is : %c",x);
	printf("\n ASCII code is : %d",x);

	getch();


}