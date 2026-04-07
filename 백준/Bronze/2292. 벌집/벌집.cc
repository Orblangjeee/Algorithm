#include <iostream>

using namespace std;

int main()
{
	int N, count = 1, sum = 1;
	cin >> N;
	while (sum < N) {
		sum += 6 * count;
		++count;
	}
	cout << count;
}