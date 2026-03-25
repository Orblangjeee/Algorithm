#include <iostream>
#include <vector>

using namespace std;

int main()
{
	char arr[5][15]{ '\0' };
	string result ="";

	for (int i = 0; i < 5; ++i) {
		string input;
		cin >> input;

		for (int j = 0; j < input.length(); ++j) {
			arr[i][j] = input[j];
		}
	}

	for (int i = 0; i < 15; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (arr[j][i] == '\0') continue;
			result += arr[j][i];
		}
	}

	cout << result;
}