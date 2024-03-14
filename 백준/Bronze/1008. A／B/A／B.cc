#include <iostream>

using namespace std;

int main() {
	
	double a = 0;
    double b = 0;

    cin >> a >> b;
    //cout은 소수점 이하 6자리까지만 출력
    cout.precision(9);
    cout << fixed;
    cout << a / b;

}