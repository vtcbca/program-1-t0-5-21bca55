/*Write a program to enter any number and check it's prime number or not
Date:22 dec 2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter any number:");
	scanf("%d",&a);
	for(b=2;b<=(a-1);b++)
	if(a%b==0)
	break;
	if(b==a)
		printf("\n %d is prime number",a);
	else
		printf("\n %d is not a prime number",a);
	getch();
}
