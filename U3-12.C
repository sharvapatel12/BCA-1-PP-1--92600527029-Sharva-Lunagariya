//WAP that find out character is in uppercase or lowercase
#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("\n Enter any character");
	scanf("%c",&ch);
	if(ch >= 65 && ch<=90)
	{
		printf("\n %c is uppercase",ch);
	}
	else
	{
		if(ch>=97 && ch<= 122 )
		{
			printf("\n %c is lowercase",ch);

		}
		else
		{
		       //	printf("\n this is not valid character",ch);

			if(ch>='0' && ch<='9')
			{
				printf("\n this is digit",ch);
			}
			else
			{
				printf("\n this is special character",ch);
			}
		}


	}
	getch();
}