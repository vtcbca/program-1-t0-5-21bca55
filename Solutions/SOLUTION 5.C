/* Write a program to enter any number and print in reverse number
Date:24 dec 2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,r;
	clrscr();
	printf("\n Enter number:");
	scanf("%d",&a);
	while(a>0)
	{
		r=a%10;
		printf("%d",r);
		a=a/10;
	}
	getch();
}