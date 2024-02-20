#include <iostream>

using namespace std;


int main() {

	bool n = true;

	bool* pNumber = &n;

	cout << "size of byte: " << *pNumber << endl;
	cout << "Before: " << pNumber << endl;

	*pNumber++;

	cout << "After: " << pNumber << endl;

	*pNumber++;

	cout << "After: " << pNumber << endl;

	return 0;
}