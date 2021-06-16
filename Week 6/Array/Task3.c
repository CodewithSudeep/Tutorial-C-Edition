//.3) Write a program in C to find the sum of all elements of the array.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[1000],i,n,sum=0;
	printf("Enter size of array: ");
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
	scanf("%d",&a[i]);
	}
	for (i=0; i<n; i++)
	{
	sum+=a[i];
	}
	printf("sum of array is:%d",sum);
	return 0;
}
