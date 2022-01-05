/* Write a program to check number palindrome number or not
Date:27th dec 2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,rev=0;
	clrscr();
	printf("\n Enter any number:");
	scanf("%d",&a);
	b=a;
	while(a!=0)
	{
		c=a%10;
		rev=rev*10+c;
		a=a/10;
	}
	if(b==rev)
	  {
		printf("%d is palindrome number",b);
	  }
	else
	  {
		printf("%d is not palindrome number",b);
	  }
	getch();
}