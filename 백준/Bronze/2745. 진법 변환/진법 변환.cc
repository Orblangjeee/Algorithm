#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int B, result = 0;
	string N;
	cin >> N >> B;
	
	for (int i = 0; i < N.length(); ++i) 
	{
		int num = N[i];

		if (num >= '0' && num < 'A')
			num -= '0';
		else
			num += (-'A' + 10);

		result = (result * B + num);
	}

	std::cout << result;

	return 0;
}