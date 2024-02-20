#include <iostream>

using namespace std;


int main() {

	int n = 10;

	int* pNumber = &n;

	cout << pNumber << endl;
	cout << *pNumber << endl;

	*pNumber *= 2;

	cout << "n = " << n << endl;

	return 0;
}