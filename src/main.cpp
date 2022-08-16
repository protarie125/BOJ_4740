#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto s = string{};
	getline(cin, s);
	while ("***" != s) {
		reverse(s.begin(), s.end());
		cout << s << '\n';

		getline(cin, s);
	}

	return 0;
}