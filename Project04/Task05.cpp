#include <iostream>

using namespace std;


int main() {

	int size = 5;

	int* array = NULL;
		
	array = new int[size];

	
	for (int i = 0; i < size; i++)
	{
		*(array + i) = (i + 1) * 10;
	}


	for (int j = 0; j < size; j++)
	{
		cout << (array + j) << " - " << *(array + j) << endl;
	}

	return 0;
}