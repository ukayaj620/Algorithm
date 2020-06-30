#include <iostream>
#include <string>
#include <iterator>

using namespace std;

template <typename T>
void printSearchResult(T find, int position)
{
    if (position != -1)
        cout << "Found " << find << " at index " << position << "\n";
    else
    {
        cout << find << " is not found.\n";
    }
    
}

template <typename T>
void linearSearch(T arr[], T find)
{
	size_t n = (&arr)[1] - arr;
    
    for (int i=0; i<n; i++)
    {
        if (arr[i] == find)
        {
           	printSearchResult<T>(find, i);    
           	return;
        }
    }
    printSearchResult<T>(find, -1);
    return;
}

int main ()
{
    // number example

    int arrNumber[] = {10, -2, 1, 14, 9, 100, 78};
    
    int findNumber;
    cout << "Enter a number to be find: ";
    cin >> findNumber;

    linearSearch<int>(arrNumber, findNumber);

    // character example
    char arrCharacter[] = {'A', 'I', 'M', 'L', 'D', 'L'};

    char findCharacter;
    cout << "Enter a character to be find: ";
    cin >> findCharacter;

    linearSearch<char>(arrCharacter, findCharacter);

    return 0;
}
