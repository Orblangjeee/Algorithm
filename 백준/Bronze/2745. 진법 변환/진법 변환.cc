#include <iostream>

using namespace std;

int main()
{

	int B, result = 0;
	string N;
	cin >> N >> B;
	
	for (int i = 0; i < N.length(); ++i) {
		
		int pow = N.length() - i - 1;
		int num = N[i];

		if (num >= '0' && num < 'A')
		{
			num -= '0';
			while (pow--) {
				num *= B;
			}
			result += num;
		}
		else 
		{
			num += (-'A' + 10);
			while (pow--) {
				num *= B;
			}
			result += num;
		}
	}

	std::cout << result;

	return 0;
}