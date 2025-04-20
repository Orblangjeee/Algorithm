#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	string result;
	cin >> input;
	
	for (int i = input.length() - 1; i >= 0 ; i--)
	{
		result += input[i];
	}

	
	cout << (input == result) ? 1 : 0;
	return 0;
}