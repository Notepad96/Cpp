#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s = "12345";
	int len = s.size();

	for (int i = 1; i <= len; i++) {
		vector<bool> v(len - i, false);
		v.insert(v.end(), i, true);
		cout << "=============== " << i << "°³ ===============\n";
		do {
			string temp = "";
			for (int k = 0; k < len; k++) {
				if (v[k]) temp += s[k];
			}
			cout << temp << "\n";
		} while (next_permutation(v.begin(), v.end()));
		cout << "===================================\n";
	}

	return 0;
}


