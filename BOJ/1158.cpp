#include <iostream>
#include <vector>

using namespace std;

int N, K;
vector<int> arr;
bool first = true;
int location;

void moveLocation() {
	int size = arr.size();
	for (int i = 0; i < K - 1; i++) {
		if (location + 1 >= size) {
			location = 0;
			continue;
		}
		location++;
	}
}

int main() {
	cin >> N >> K;
	arr.resize(N);

	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
	}

	printf("<");
	while (!arr.empty()) {
		moveLocation();
		int value = arr[location];
		if (first) {
			printf("%d", value);
			first = false;
		}
		else {
			printf(", %d", value);
		}

		arr.erase(arr.begin() + location);
		if (location >= arr.size()) {
			location = 0;
		}
	}
	printf(">");

	return 0;
}