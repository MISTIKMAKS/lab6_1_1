#include <iostream>

using namespace std;
int array_result(int A[], int P) {
	for (int i = 0; i < 25; i++)
	{
		A[i] = rand() % 90 + 5;
		if (i % 2 == 0)
		{
			if (i % 8 != 0)
			{
				P += A[i];
			}
		}
	}
	return P;
}
int output(int A[], int P){
	cout << "Array: ";
	for (int i = 0; i < 25; i++)
	{
		cout << "[" << i << "] " << A[i] << "   ";
	}
	return 1;
}
int main() {
	int A[25];
	int P = 0;
	cout << "Result: " << array_result(A, P) << endl;
	cout << "Array: " << output(A, P) << endl;
	return 0;
}