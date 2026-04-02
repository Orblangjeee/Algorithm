#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int N, B, rem;
	string result = "";
	cin >> N >> B;

	while (N) {
		rem = N % B;
		if (rem >= 10)
		{
			result += (char)(rem + 'A' - 10);
		}
		else 
		{
			result += (char)(rem + '0');
		}
		N /= B;
	}

	reverse(result.begin(), result.end());
	cout << result;

}