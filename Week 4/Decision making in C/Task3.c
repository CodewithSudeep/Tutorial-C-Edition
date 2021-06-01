//W4.3) Write a C program to find maximum between two numbers.
#include <stdio.h>
#include<conio.h>
int main(){
	int a,b,greater;
	printf("Enter first numeber: ");
	scanf("%d",&a);
	
	printf("enter second number:");
	scanf("%d",&b);
	greater=(a>b) ? a : b;
	printf(" Greater value : %d", greater);
	return 0;
	
	
	
}
