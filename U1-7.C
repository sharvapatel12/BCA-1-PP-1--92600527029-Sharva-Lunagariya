//WAP to find out the largest out of three number
#include<stdio.h>
#include<conio.h>

void main()
{
	 int x,y,z;
	 clrscr();
	 printf("\n Enter value of x,y,z:");
	 scanf("%d%d%d",&x,&y,&z);

	 if(x > y)
	 {
		printf("\n x number is the largest");

	 }
	 else
	 {
	       //	printf("\n y number is the largest");

		if(y > z)
		{
			printf("\n y number is the largest");


		}
		else
		{
			printf("\n z number is the largest");

		}


	 }
	 getch();


}