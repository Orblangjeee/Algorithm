#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int row, col;
	cin >> row >> col;

	vector<int> grid(row * col * 2);

	for (int i = 0; i < row * col * 2; i++)
		cin >> grid[i];


	for (int k = 0; k < row * col; k++)
		cout << grid[k] + grid[k + row * col] << " ";
}
