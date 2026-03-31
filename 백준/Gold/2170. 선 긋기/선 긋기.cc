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

	for (const pair<int,int>& p : v) {
		
		if (p.first <= lineL) {
			lineL = max(p.second, lineL);
		}
		else {
			result += (lineL - lineF);
			lineF = p.first;
			lineL = p.second;
		}
	}
	result += (lineL - lineF);

	cout << result;
}