//WAP that input one character from user and find out that character is vowel or not
#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("\n Enter any character");
	scanf("%c",&ch);
	if(ch== 'a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'||
	   ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
	{
		printf("\n this is vowel",ch);
	}
	else
	{
		printf("\n this is not vowels",ch);
	}
	getch();


}