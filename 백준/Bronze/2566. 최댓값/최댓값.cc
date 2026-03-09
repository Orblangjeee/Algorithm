#include <iostream>
using namespace std;
int main()
{
	int pos = 0, input, max = 0, N = 0;

	while (N != 81) {
		
		cin >> input;
		if (input > max) {
			max = input;
			pos = N;
		}
		N++;
	}
	
	cout << max << "\n";
	cout << (pos / 9 + 1) << " " << (pos % 9 + 1);
}