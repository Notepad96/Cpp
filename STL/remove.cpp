#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v = { 10, 20, 30, 40, 30, 20, 10, 10, 40, 50 };

	
	for (int i : v) cout << i << " ";
	cout << "\n========================================\n";

	auto it = remove(v.begin(), v.end(), 10);
	v.resize( it - v.begin());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << "\n========================================\n";


	it = remove_if(v.begin(), v.end(), [](int n) { return n > 30; });
	v.resize(it - v.begin());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << "\n========================================\n";

	return 0;
}