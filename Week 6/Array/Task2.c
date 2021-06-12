//2)  Write a program in C to read n number of values in an array and display 
//it in reverse order.
// Input(2, 5, 7)
// Expected output (7, 5, 2).
#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[3]={2,5,7};
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\nArray in reverse order: ")
	For(i=n-1; i>=0; i--)
	{
		printf("%d\t", arr[i]);
	}
	return0;
}
