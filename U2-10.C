//WAP that input quantity, price, discount and display final amount
#include<stdio.h>
#include<conio.h>

void main()
{
	float q,p,d,t,fa,drs;
	clrscr();
	printf("\n**************************");

	printf("\n Enter value of q");
	scanf("%f", &q);

	printf("\n Enter value of p");
	scanf("%f", &p);

	printf("\n Enter value of d");
	scanf("%f", &d);

	t=q*p;

	drs=t*d/100;

	fa=t-drs;
	printf("\n****************************");
	printf("\n quantity %.2f",q);
	printf("\n price %.2f", p);
	printf("\n___________________________");
	printf("\n discount %2f",d);
	printf("\n total %.2f",t);
	printf("\n discount in rupees %.2f",drs);
	printf("\n____________________________");
	printf("\n Final Amount %.2f", fa);
	getch();


}