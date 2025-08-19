
#include <iostream>
using namespace std;

int main()
{
    string input;
    int ascii['Z'-'A' + 1] = {0};
    cin >> input;

    //1. 소문자 -> 대문자 변환
    for (int i = 0; i < input.length(); i++) {
        if ('a' <= input[i] && 'z' >= input[i]) {
            input[i] -= 32;
        }

        //input[i] = tolower(input[i]);

        //2. 해당 배열에 count++ (0~25로 초기화)
        ascii[input[i] - 'A']++;
    }

    //3. 가장 많은 갯수 찾아내기
    int max = 0;
    char result;
    for (int i = 0; i < sizeof(ascii) / sizeof(ascii[0]); i++) {
        int temp = ascii[i];
        if (temp > max) {
            max = temp;
            result = static_cast<char>(i + 'A');
        }
        else if (temp == max) {
            max = temp;
            result = '?';
        }
    }


    std::cout << result << endl;

}


