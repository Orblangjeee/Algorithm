#include <iostream>

using namespace std;

int main()
{
	int X, line = 1, r;
	cin >> X;

	while (X > line) {
		X -= line;
		++line;
	}

	r = (line - X) + 1;

	if (line % 2 == 0) {
		cout << X << "/" <<r;
	}
	else {
		cout << r << "/" << X;
	}
}