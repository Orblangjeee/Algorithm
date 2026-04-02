#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int N, B;
	string result = "";
	cin >> N >> B;

	while (N) {
		result += chars[N % B];	
		N /= B;
	}

	reverse(result.begin(), result.end());
	cout << result;
}