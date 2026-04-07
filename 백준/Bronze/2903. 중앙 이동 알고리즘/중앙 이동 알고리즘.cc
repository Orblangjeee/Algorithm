#include <iostream>

using namespace std;

int main()
{
	int N, result = 0;
	cin >> N;
	result = (1 << N) + 1;
	cout << result * result;
}