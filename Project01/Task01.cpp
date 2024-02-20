#include <iostream>

using namespace std;

#define size 100

void random_init_matrix(int matrix[size][size], int max, int min,
	int classes, int students);
string convert_matrix_to_string(int matrix[size][size], int classes, int students);


int main() {
	//int max = 10, min = 0;

	//int classes, students;

	//int matrix[size][size];

	int n = 10;

	int* pNumber = &n;

	cout << pNumber << endl;
	cout << *pNumber << endl;

	*pNumber *= 2;

	cout << "n = " << n << endl;

	return 0;
}