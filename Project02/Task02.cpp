#include <iostream>

using namespace std;


int main() {

	int n = 10;

	int* pNumber = &n;


	cout << "Before: " << pNumber << endl;
	
	*pNumber++;

	cout << "After: " << pNumber << endl;

	*pNumber++;

	cout << "After: " << pNumber << endl;

	return 0;
}