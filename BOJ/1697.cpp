#include <iostream>
#include <queue>
#define endl '\n'

using namespace std;

int N, K;
bool visited[100001];

int bfs() {
	int cnt = 0;
	queue<int> q;
	q.push(N);
	visited[N] = true;

	while (!q.empty()) {
		int size = q.size();
		for (int i = 0; i < size; i++) {
			int x = q.front();
			q.pop();

			if (x == K) {
				return cnt;
			}

		    if (x - 1 >= 0 && !visited[x - 1]) {
				q.push(x - 1);
				visited[x - 1] = true;
			}
			if (x + 1 <= 100000 && !visited[x + 1]) {
				q.push(x + 1);
				visited[x + 1] = true;
			}
			if (x * 2 <= 100000 && !visited[x * 2]) {
				q.push(x * 2);
				visited[x * 2] = true;
			}
		}
		cnt++;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> N >> K;

	cout << bfs() << endl;

	return 0;
}