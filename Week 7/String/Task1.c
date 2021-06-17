//.1) Write a program in C to input a string and print it.
#include<stdio.h>
#include<conio.h>
void main()
{
	Clrscr();
	char name[10];
	printf("enter the string\n");
	scanf("%s",& name);
	printf("entered string is %s\n",name);
	getch();
}
