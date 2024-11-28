#include <iostream>
#include <string>
using namespace std;

int main()
{
	string inputs;
	int i = 0;
	while (i < 100)
	{
		getline(cin , inputs);
		cout << inputs << endl;
		++i;
	}

}