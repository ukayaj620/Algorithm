#include <stdio.h>
#include <stdlib.h>

/*
The condition that we must fullfil when using Binary Search is the input data must be sorted.
In this implementation, we're going to use array of integer as input data.
*/

int binarySearch(int *arr, int left, int right, int x)
{
	if (left <= right)
	{
		int middle = left + (right - left)/2;
		
		if (arr[middle] == x)
		{
			return middle;
		}
		
		if (arr[middle] > x)
		{
			return binarySearch(arr, left, middle - 1, x);
		}
		
		return binarySearch(arr, middle + 1, right, x);
	}
	
	return -1; // if the number doesn't exist
}

int main ()
{
	int size;
	printf("How many number you want to input? ");
	scanf("%d", &size);
	
	int *arr = (int *)malloc(size*sizeof(int));
	
	int i;
	
	for (i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int find;
	printf("Input number that you want to find?");
	scanf("%d", &find);
	
	int position = binarySearch(arr, 0, size - 1, find); 
    if (position == -1) 
		printf("Element is not present in array");
	else
		printf("Element is present at index %d", position); 
	
	return 0;
}
