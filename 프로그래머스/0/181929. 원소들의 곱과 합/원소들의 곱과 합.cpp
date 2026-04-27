#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int mul = 1, sum = 0;

    for (int& n : num_list) {
        mul *= n;
        sum += n;
    }

    answer = mul < sum * sum ? 1 : 0;

    return answer;
}