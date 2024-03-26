#include <iostream>
using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int n = 0, m = 0, input =0;
	int i = 0, j = 0;
	cin >> n >> m;
	int* S = new int[n + 1] {};
	for (int i = 0; i < n; i++) {
		cin >> input;
		if (i == 0) {
			S[i + 1] = input;
		}
		else {
			S[i + 1] = S[i] + input;
		}
	}

	for (int k = 0; k < m; k++) {
		cin >> i >> j;
		cout << S[j] - S[i - 1] << "\n";
	}

}