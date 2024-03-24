#include <iostream>

using namespace std;

int main()
{
    int input;
    int max = 0;
    int index = 0;
    for (int i = 0; i < 9; i++) {
        cin >> input;
        if (max < input) {
            max = input;
            index = i + 1;
        } 
        
    }
    cout << max << endl;
    cout << index << endl;
}
