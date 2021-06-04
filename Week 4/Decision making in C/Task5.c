// Write a C program to check whether a year is leap year or not.
#include<stdio.h>
#include<conio.h>
int main();

s{
	int year;
	printf("Enter a year: ");
	scanf("%d",&year);
	if(year % 400 ==0)
	printf("%d is a leap year.",year); 
	else if(year % 100 == 0)
	printf("%d is not a leap year.",year);
	else if(year % 4 == 0)
	printf("%d is a leap year.",year);
	else
	printf("%d is not a leap year.",year);
	return 0;
}
