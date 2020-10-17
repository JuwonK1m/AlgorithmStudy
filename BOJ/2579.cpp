#include <iostream>
#include <algorithm>
#define endl '\n'

using namespace std;

int n; // 계단의 개수
int score[301], sum[301];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> score[i];
	}

	sum[1] = score[1];
	sum[2] = max(score[1] + score[2], score[2]);
	sum[3] = max(score[1] + score[3], score[2] + score[3]);
	
	for (int i = 4; i <= n; i++) {
		sum[i] = max(sum[i - 3] + score[i - 1] + score[i], sum[i - 2] + score[i]);
	}

	cout << sum[n] << endl;

	return 0;
}