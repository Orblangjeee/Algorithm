#include <iostream>

using namespace std;

int main()
{
	bool w[100][100] = { 0 };
	int count, x, y, result = 0;
	cin >> count;
	while (--count > -1) {
		cin >> x >> y;
		for (int i = x; i < (x + 10); ++i) {
			for (int j = y; j < (y + 10); ++j) {
				w[i][j] = 1;
			}
		}
	}

	for (const auto& row : w) {
		for (const bool& b : row) {
			if (b)
				++result;
		}
	}
	

	cout << result;
}