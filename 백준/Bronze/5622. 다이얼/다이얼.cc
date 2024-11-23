#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    int second = 0;
    cin >> input;

    for (char s : input)
    {
        if (s >= 'A' &&  s <= 'C')
        {
            second += 3;
        } else if (s >= 'D' && s <= 'F')
        {
            second += 4;
        } else if (s >= 'G' && s <= 'I')
        {
            second += 5;
        } else if (s >= 'J' && s <= 'L')
        {
            second += 6;
        } else if (s >= 'M' && s <= 'O')
        {
            second += 7;
        } else if (s >= 'P' && s <= 'S')
        {
            second += 8;
        } else if (s >= 'T' && s <= 'V')
        {
            second += 9;
        } else if (s >= 'W' && s <= 'Z')
        {
            second += 10;
        }
    }

    
    cout << second;
}


