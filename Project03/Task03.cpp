#include <iostream>

using namespace std;


int main() {

	double n = true;

	double* pNumber = &n;

	cout << "size of byte: " << *pNumber << " byte(s)" << endl;
	cout << "Before: " << pNumber << endl;

	*pNumber++;

	cout << "After: " << pNumber << endl;

	*pNumber++;

	cout << "After: " << pNumber << endl;

	return 0;
}