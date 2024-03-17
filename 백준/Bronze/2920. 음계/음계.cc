
#include <iostream>

using namespace std;

int main()
{
    char input;
    string result;
    for (int i = 0; i < 8; i++) {
        cin >> input;
        result += input;
    } 
    if (result == "12345678") {
        cout << "ascending";
    }
    else if (result == "87654321") {
        cout << "descending";
    }
    else {
        cout << "mixed";
    }
}
