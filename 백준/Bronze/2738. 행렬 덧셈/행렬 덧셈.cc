#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int row, col;
	cin >> row >> col;

	int size = row * col * 2;
	vector<int> grid(size);

	for (int i = 0; i < size; i++)
		cin >> grid[i];

	for (int k = 0; k < size / 2; k++) {
		cout << grid[k] + grid[k + size / 2] << " ";
		if ((k % col) == (col - 1)) cout << "\n";
	}
}
