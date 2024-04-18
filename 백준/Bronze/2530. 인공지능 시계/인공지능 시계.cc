#include <iostream>
using namespace std;

int main()
{
	int h = 0, m = 0, s = 0, input = 0;

	cin >> h >> m >> s;
	cin >> input;

	s += input;
	m += s / 60;
	
	s %= 60;
	h += m / 60;
	
	m %= 60;
	h %= 24;

	cout << h << " " << m << " " << s;
}

