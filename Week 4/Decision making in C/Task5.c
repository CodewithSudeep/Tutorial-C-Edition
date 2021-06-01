//W4.5) Write a C program to check whether a year is leap year or not.

#include <stdio.h>
#include <conio.h>
int main(){
	int a,b,result;
	printf("enter days in  year 365 or 366:");
	scanf("%d",&a);
	if(a==365 || a==366){
			(a%2==0) ? printf("given year is leap") : printf("given year is not leap");
	}
	else
	{
		
		printf("incorrect input");
			}
	return 0;
	
	
	
}
