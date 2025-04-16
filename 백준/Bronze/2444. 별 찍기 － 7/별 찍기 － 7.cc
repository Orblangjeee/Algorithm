#include <iostream>
#include <string>
using namespace std;

int main(int arg)
{
	int input = 0;
	cin >> input;
	
	for (int i = input - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}

		for (int k = 1; k < (input - i) * 2; k++)
		{
			cout << "*";
		}
		cout << endl;
	}


	for (int i = input; i > 0; i--)
	{
		for (int k = 0; k < (input - i); k++)
		{
			cout << " ";
		}

		for (int j = 1; j < i * 2; j++)
		{
			cout << "*";
		}


		cout << endl;
	}
	return 0;
}