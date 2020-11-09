#include <iostream>
#define endl '\n'

using namespace std;

int N;
int A[1000], D[1000];
int maxValue;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> A[i];

	for (int i = 0; i < N; i++)
		D[i] = 1;

	for (int i = 0; i < N; i++) {
		int temp = 0;
		for (int j = 0; j < i; j++) {
			if (A[i] < A[j] && D[j] > temp) {
				D[i] = D[j] + 1;
				temp = D[j];
			}
		}
		if (D[i] > maxValue) {
			maxValue = D[i];
		}
	}

	cout << maxValue << endl;

	return 0;
}