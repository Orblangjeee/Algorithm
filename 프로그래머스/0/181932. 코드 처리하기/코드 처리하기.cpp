
#include <iostream>
#include <string>

using namespace std;

string solution(string code) {
    string ret = "";
    int mode = 0;

    for (int idx = 0; idx < code.length(); idx++) {
        if (mode == 0) {
            if (code[idx] == '1') {
                mode = 1;
            }
            else {
                if (idx % 2 == 0)
                    ret.push_back(code[idx]);
            }
        }
        else if (mode == 1) {
            if (code[idx] == '1') {
                mode = 0;
            }
            else {
                if (idx % 2 != 0)
                    ret.push_back(code[idx]);
            }
        }

    }
    return ret.empty() ? "EMPTY" : ret;
}

int main()
{
    std::cout << solution("abc1abc1abc");
    return 0;
}

