#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string odd = "", even = "";
    for (int& n : num_list) {
        if (n % 2 == 0) {
            odd += n + '0';
        }
        else {
            even += n + '0';
        }
    }
    answer = stoi(odd) + stoi(even);
    
    return answer;
}