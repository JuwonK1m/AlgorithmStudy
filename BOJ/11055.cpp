#include <iostream>
#define endl '\n'

using namespace std;

int N;
int a[1000], d[1000];
int maxValue;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> a[i];

	for (int i = 0; i < N; i++) {
		d[i] = a[i];
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j] && d[j] + a[i] > d[i]) {
				d[i] = d[j] + a[i];
			}
		}
		if (d[i] > maxValue) {
			maxValue = d[i];
		}
	}

	cout << maxValue << endl;

	return 0;
}