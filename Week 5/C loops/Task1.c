// Write a program in C to display the first 10 natural numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	i=1;
	do
	{
		printf("%d",i);
		i++;
	}
	while(i<11);
	getch();
}
