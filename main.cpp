#include <iostream>
#include <vector>
#include <string>
#include "algorithms.h"

using namespace std;

template <typename T>
void display_vector(const vector<T>& items){
	for (const T& item : items){
		cout << item << " ";
	}
	cout << endl;
}

int main()
{
	cout << "CUSTOM SEARCH AND SORT LIBRARY!\n";
	
	vector<int> numbers = {29, 10, 15, 32, 44};
	
	cout << "Original numbers: ";
	display_vector(numbers);
	
	cout << "LINEAR SEARCH\n";
	
	int target = 10;
	
	if (linear_search(numbers, target)){
		cout << target <<  " was found!";
	} else {
		cout << target << " was not found in the collection!";
	}

	cout << "SELECTION SORT\n";

	selection_sort(numbers);

	cout << "Sorted numbers: ";
	display_vector(numbers);

	cout << "\nBINARY SEARCHn";

	target = 22;

	cout << target << (binary_search_custom(numbers, target) ? " was found\n" : " was found in the collection\n");

	vector<string> names = {"Jose", "Brandon", "Seth"};

	cout << "\nOriginal names: ";
	display_vector(names);

	cout << "Linear search for Jose:" << (linear_search(names, string("Jose")) ? " was found\n" : " was found not in the collection\n");
	selection_sort(names);

	cout << "Sorted names: ";
	display_vector(names);

	cout << "Binary search for Seth: " << (binary_search_custom(names, string("Seth")) ? " was found\n" : " was found in the collection\n");
}
