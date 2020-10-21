#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'

using namespace std;

int N;
vector<pair<int, int>> arr;
int cnt, j;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second < b.second;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> N;
	arr.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i].first >> arr[i].second;
	}

	sort(arr.begin(), arr.end(), compare);

	cnt++;

	for (int i = 1; i < N; i++) {
		if (arr[i].first >= arr[j].second) {
			cnt++;
			j = i;
		}
	}

	cout << cnt << endl;

	return 0;
}