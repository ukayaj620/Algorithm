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
	
	// SELECTION SORT ALGORITHM (ASCENDING)
	for (int i=0; i<n-1; i++)
	{
		int min_index = i;
		for(int j=i+1; j<n; j++)
		{
			if (arr[j] < arr[min_index]) // CHECKING GREATER OR SMALLER
			{
				min_index = j;
			}
			int temp = arr[min_index];
			arr[min_index] = arr[i];
			arr[i] = temp;
		}
	}
	
	cout << "ASCENDING: ";
	// THE RESULT AFTER ASCENDING SORTING USING SELECTION SORT
	for (int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
	
	// SELECTION SORT ALGORITHM (DESCENDING)
	for (int i=0; i<n-1; i++)
	{
		int min_index = i;
		for(int j=i+1; j<n; j++)
		{
			if (arr[j] > arr[min_index]) // CHECKING GREATER OR SMALLER
			{
				min_index = j;
			}
			int temp = arr[min_index];
			arr[min_index] = arr[i];
			arr[i] = temp;
		}
	}
	
	cout << "DESCENDING: ";
	// THE RESULT AFTER DESCENDING SORTING USING SELECTION SORT
	for (int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
	
	return 0;
}
