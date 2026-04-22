#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n = 0;

	while (true) {
		int sum = 1;
		string result = "1";
		cin >> n;

		if (n == -1)
			return 0;

		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				result += " + " + to_string(i);
				sum += i;
			}
		}

		if (sum == n) {
			cout << n << " = " << result << "\n";
		}
		else {
			cout << n << " is NOT perfect." << "\n";
		}
	}
}

