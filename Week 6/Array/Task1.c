// Write a program in C to store ten elements in an array and print it. 
// Input (1, 1, 2, ......, 10) 
//Expected output (1,1,2,3,4,5,6,7,8,9,10)
#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j;
	int arr[11] = {1,2,3,4,5,6,7,8,9,10};
	printf("The elements of array are ");
	for ( i=0; i<11; i++)
	{
		printf("%d",arr[i]);
	}

	getch();
}

 
