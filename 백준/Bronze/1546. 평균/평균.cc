#include <iostream>
using namespace std;

int main() {
	int n = 0, input = 0, highScore = 0, sum =0;
	cin >> n;
	int score[1000];
	for (int i = 0; i < n; i++) {
		cin >> input;
		sum += input;
		if (highScore < input) {
			highScore = input;
		}
		score[i] = input;
	}

	cout << sum / (double)highScore * 100 / n;
}