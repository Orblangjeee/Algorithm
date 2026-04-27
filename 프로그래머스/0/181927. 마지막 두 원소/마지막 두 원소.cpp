#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
     int lastIndex = num_list.size() - 1;
     int last = num_list[lastIndex];
     int prev = num_list[lastIndex - 1];

     if (last > prev) {
         num_list.push_back(last - prev);
     }
     else {
         num_list.push_back(last * 2);
     }

     return num_list;
}