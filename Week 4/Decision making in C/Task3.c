// Write a C program to find maximum between two numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("a is maximum");
	else
	printf("b is maximum");
	getch();
}
