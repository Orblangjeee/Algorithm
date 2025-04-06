#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string result1 = to_string(a) + to_string(b);
    string result2 = to_string (b) + to_string(a);
    int answer = (stoi(result1) > stoi(result2)) ? stoi(result1) : stoi(result2);
    return answer;
}