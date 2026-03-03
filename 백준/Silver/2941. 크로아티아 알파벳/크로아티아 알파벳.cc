
#include <iostream>

int main()
{
    //몇 개의 크로아티아 알파벳으로 이루어져 있는지

	std::string input;
	int count = 0;
	std::cin >> input;

	for (int i = 0; i < input.length(); i++){
		
		if (!(i + 1 < input.length())) {
			count++;
			continue;
		}

		char first = input[i];
		char second = input[i+1];

		if (((first == 'c' || first == 'd' ) && second == '-') || ((first == 'l' || first == 'n') && second == 'j') || ((first == 'z' || first == 'c' || first == 's') && second == '='))
		{
			count += 1;
			i += 1;
		}
		else if (i + 2 < input.length() && (first == 'd' && second == 'z' && input[i + 2] == '=')) {
			count += 1;
			i += 2;
		}
		else {
			count++;
		}
	}

	std::cout << count;
}
