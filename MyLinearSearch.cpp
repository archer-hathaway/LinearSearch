// Linear Search Algorithm


#include <iostream>
#include <string> 
using namespace std;

// Linearly search x in arr[]. If x is present then return its location, otherwise return -1 
int search(int numArray[], int numSize, int searchKey) {

	int i;
	for (i = 0; i < numSize; i++) {
		if (numArray[i] == searchKey) {
			return i;
		}
	}

	return -1;		// not found
}

// Driver code 
void main(string args[]) {

	int numArray[] = { 1 ,7, 14, 17, 19 ,22 ,28, 35, 38, 41, 57, 68,76, 85, 90 };
	int const numSize = sizeof(numArray) / sizeof(numArray[0]);
	int searchKey;//declared variable

	//added this code for user input for keys 26 and 40 respectively
	cout << "what is your search key? \n";
	cin >> searchKey;

	cout << "List of numbers to search through: \n";	
	for (int i = 0; i < numSize; i++) {
		cout << "\t" << numArray[i];
	}

	int searchIndex = search(numArray, numSize, searchKey);
	if (searchIndex == -1) {
		cout << "\nThe Search Key " << searchKey << " is not present in the array";
	}
	else {
		cout << "\nThe Search Key " << searchKey << " found at position " << searchIndex;
	}

}
/*
The output results for both 26 and 40:

List of numbers to search through: 1 7 14 17 19 22 28 35 41 57 68 76 85 90
The search key 26 is not present in the array
The search key 40 is not present in the array


*/