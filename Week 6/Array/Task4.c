//.4) Write a program in C to count a total number of duplicate elements in an array.
#include<stdio.h>
#define MAX_SIZE 100S
int main()
{
	int arr[MAX_SIZE];
	int i,j,size,count=0;
	printf("Enter size of the array :");
	scanf("%d",&size);
	printf("Enter elements in array :");
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i=0; i<size; i++)
	{
		for (j=i+1; j<size; j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
				break;
			}
		}
	}
	printf("\ntotal number of duplicate elements found in array = %d",count);
	return 0;
}
