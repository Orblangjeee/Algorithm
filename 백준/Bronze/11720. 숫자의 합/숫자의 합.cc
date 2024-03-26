#include <iostream>
using namespace std;

int main() {
	int input = 0, result =0;
	string number;
	cin >> input;
	cin >> number;
	for (int i = 0; i < input; i++) {
		result += number[i] -'0';
	}

	cout << result;
}