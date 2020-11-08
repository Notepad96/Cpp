#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s = "1234";

	do {
		cout << s << " ";
	} while (next_permutation(s.begin(), s.end()));
	cout << "\n\n";
	


	vector<int> v = { 10, 5, 1, 2, 4 };
	int len = v.size();
	//sort(v.begin(), v.end());	// 정렬 후 next_permutation 사용해야함

	do {
		for (int i = 0; i < len; i++) {
			cout << v[i] << " ";
		}
		cout << "\n";
	} while (prev_permutation(v.begin(), v.end()));

	return 0;
}