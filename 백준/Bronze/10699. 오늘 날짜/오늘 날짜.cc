#include <iostream>
#include <ctime>
using namespace std;

int main()
{	
	time_t timer;
	struct tm* t;
	timer= time(NULL);
	t = localtime(&timer);
	
	int year = t->tm_year + 1900;
	int month = t->tm_mon + 1;
	int day = t->tm_mday;

	cout << year << "-";
	cout.width(2); 
	cout.fill('0');
	cout << month << "-";
	cout.width(2); 
	cout.fill('0');
	cout <<day;
}


