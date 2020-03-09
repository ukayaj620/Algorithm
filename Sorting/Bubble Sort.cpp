#include <iostream>

using namespace std;

int main ()
{
	int n, arr[10000];
	
	// INPUT HOW MUCH NUMBER TO INPUT
	cout << "Numbers?: "; cin >> n;
	
	// INPUT THE NUMBERS
	for (int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	
	// BUBBLE SORT ALGORITHM (ASCENDING)
	for (int i=0; i<n; i++)
	{
		for(int j=0; j<n-1; j++)
		{
			if (arr[j] > arr[j+1]) // CHECKING GREATER OR SMALLER
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	cout << "ASCENDING: ";
	// THE RESULT AFTER ASCENDING SORTING USING BUBBLE SORT
	for (int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
	
	// BUBBLE SORT ALGORITHM (DESCENDING)
	for (int i=0; i<n; i++)
	{
		for(int j=0; j<n-1; j++)
		{
			if (arr[j] < arr[j+1]) // CHECKING GREATER OR SMALLER
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	cout << "DESCENDING: ";
	// THE RESULT AFTER DESCENDING SORTING USING BUBBLE SORT
	for (int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
	
	return 0;
}
