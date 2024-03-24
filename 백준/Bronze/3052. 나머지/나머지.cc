#include <iostream>
using namespace std;

int main()
{
    int input =0;
    int extra[42] = { 0 };
    int result = 0;
    for (int i = 0; i < 10; i++) {
        cin >> input;
        if (extra[input % 42] == 0) {
            extra[input % 42] = 1;
            result ++;
        }
    }
    cout << result;
}
