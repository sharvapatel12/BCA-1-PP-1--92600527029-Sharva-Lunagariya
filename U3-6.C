// Unit 3(6) Calculate Gross Salary

#include<stdio.h>
#include<conio.h>

void main()
{
	float s,hr,ta,da,pf,gs;
	clrscr();

	printf("\n Enter the value of s");
	scanf("%f", &s);

	if(s>=5000)
	{
		hr=(s * 0.05);
		ta=(s * 0.06);
		da=(s * 0.04);
		pf=(s * 0.05);

	}
	else
	{
		 hr=(s * 0.04);
		 ta=(s * 0.05);
		 da=(s * 0.03);
		 pf=(s * 0.04);

	}

	gs= s + hr + ta + da - pf;
	printf("\n Gross salary is : %.2f", gs);
	printf("\n hr Rs : %.2f",hr);
	printf("\n ta Rs : %.2f",ta);
	printf("\n da Rs : %.2f",da);
	printf("\n pf Rs : %.2f",pf);


	getch();



}