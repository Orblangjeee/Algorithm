#include <iostream>

using namespace std;

int main()
{
	int t, num = 0;
	int cal[] = {25, 10, 5, 1};
	cin >> t;
    while (t--) {
        cin >> num;
        for (int d : cal) {
            cout << num / d << " ";
            num %= d;
        }
        cout << "\n";
    }
}