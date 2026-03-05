#include <iostream>


bool CheckGroupWord(std::string str) {
	std::string appear;

	for (int j = 0; j < str.length(); j++) {

		if (j == 0) {
			appear += str[j];
			continue;
		}

		if (appear[appear.length() - 1] == str[j]) {
			continue;
		}
		else {

			for (int k = 0; k < appear.length(); k++) {
				if (appear[k] == str[j]) {
					return false;
				}
			}

			appear += str[j];
		}
	}

	return true;
}


int main()
{
	int inputCount = 0;
	int count = 0;
	std::string inputStr;
	std::cin >> inputCount;
	
	for (int i = 0; i < inputCount; i++) {
		std::cin >> inputStr;
		
		if (!CheckGroupWord(inputStr))
			count++;
	}

	std::cout << inputCount - count;
}

