#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string result1 = to_string(a) + to_string(b);
    int result2 = 2 * a * b;
    int answer = (stoi(result1) > result2) ? stoi(result1) : result2;
    return answer;
}