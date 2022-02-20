#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a;
	cin >> a;
	do {
		auto leafNow = int{ 1 };
		for (int i = 0; i < a; ++i) {
			int f;
			cin >> f;

			leafNow *= f;

			int cut;
			cin >> cut;
			leafNow -= cut;
		}

		cout << leafNow << '\n';

		cin >> a;
	} while (0 != a);

	return 0;
}