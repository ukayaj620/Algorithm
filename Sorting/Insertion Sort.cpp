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
	
	// INSERTION SORT ALGORITHM (ASCENDING)
	for (int i=1; i<n; i++)
	{
		int key = arr[i];
		int j = i-1;
		for(j; j>=0 && arr[j]>key; j--)
		{
			arr[j+1] = arr[j];
		}
		arr[j+1] = key;
	}
	
	cout << "ASCENDING: ";
	// THE RESULT AFTER ASCENDING SORTING USING INSERTION SORT
	for (int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
	
	// INSERTION SORT ALGORITHM (DESCENDING)
	for (int i=1; i<n; i++)
	{
		int key = arr[i];
		int j = i-1;
		for(j; j>=0 && arr[j]<key; j--)
		{
			arr[j+1] = arr[j];
		}
		arr[j+1] = key;
	}
	
	cout << "DESCENDING: ";
	// THE RESULT AFTER DESCENDING SORTING USING INSERTION SORT
	for (int i=0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
	
	return 0;
}
