#include <iostream>
#include <string>
#include <sstream>
using namespace std;


//@ : *3   % : +5  # : -7
double number = 0;

void Calcul(char sick) {
	if (sick == '@') {
		number *= (double)3;
	}
	else if (sick == '%') {
		number += 5;
	}
	else if (sick == '#') {
		number -= 7;
	}
	else {
		return;
	}
}
int main()
{
	int t = 0;
	string input;
	cin >> t;
	cin.ignore();
	for (int i = 0; i < t; i++) {
		char a = NULL, b = NULL, c = NULL;
		getline(cin, input);
		stringstream ss(input);
		ss >> number >> a >> b >> c;
		Calcul(a);
		Calcul(b);
		Calcul(c);
		cout << fixed;
		cout.precision(2);
		cout << (double)number << endl;
	}
}