/*Check the number is armstrong or not
Date:24 dec 2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum=0,c;
	clrscr();
	printf("\n\t Enter the 3 number:");
	scanf("\n\t%d",&a);
	c=a;
	while(a>0)
	{
		b=a%10;
		sum=sum+(b*b*b);
		a=a/10;
	}
	if(sum==c)
	{
		printf("\n \t %d Is armstrong number",sum);
	}
	else
	{
		printf("\n \t%d is not armstrong number",sum);
	}
	getch();
}