#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int count, lineF, lineL;
	long long result = 0;

	cin >> count;
	vector<pair<int, int>> v(count);

	for (int i = 0; i < count; ++i) {
		cin >> v[i].first >> v[i].second;
	}
	
	sort(v.begin(), v.end());

	lineF = v[0].first;
	lineL = v[0].second;

	for (int i = 1; i < v.size(); ++i) {
		
		if (v[i].first <= lineL) {
			lineL = max(v[i].second, lineL);
		}
		else {
			result += (lineL - lineF);
			lineF = v[i].first;
			lineL = v[i].second;
		}
	}
	result += (lineL - lineF);

	cout << result;
}