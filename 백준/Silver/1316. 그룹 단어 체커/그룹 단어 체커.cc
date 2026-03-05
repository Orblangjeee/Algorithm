#include <iostream>
#include <string>

using namespace std;

int main()
{

	int N, count = 0;
	cin >> N;
	
	for (int i= 0; i < N; i++) {
		string str;
		cin >> str;

		char last = ' ';
		bool visited[26] = { false };

		for (char c : str) {
			if (visited[c - 'a'] && last != c) {
				count++;
				break;
			}
			else {
				last = c;
				visited[c - 'a'] = true;
			}
		}
	}

	cout << N - count;

}