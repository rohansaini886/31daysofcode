// CPP code to check if a matrix is
// sparse.
#include <iostream>
using namespace std;

const int MAX = 100;

bool isSparse(int array[][MAX], int m, int n)
{
	int counter = 0;

	// Count number of zeros in the matrix
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			if (array[i][j] == 0)
				++counter;

	return (counter > ((m * n) / 2));
}

// Driver Function
int main()
{
	int array[][MAX] = { { 1, 0, 3 },
						{ 0, 0, 4 },
						{ 6, 0, 0 } };

	int m = 3,
		n = 3;
	if (isSparse(array, m, n))
		cout << "Yes";
	else
		cout << "No";
}
