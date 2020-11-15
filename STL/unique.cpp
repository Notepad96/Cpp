#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int num = 0;
int main() {
	vector<int> v = { 10, 30, 20, 20, 40, 40, 40, 50, 10, 20, 30};

	for (int i : v) cout << i << " ";
	cout << "\n==================================\n";

	// 중복된 원소를 뒤로 
	auto it = unique(v.begin(), v.end());

	for (int i : v) cout << i << " ";
	cout << "\n==================================\n";

	v.resize(it - v.begin());

	for (int i : v) cout << i << " ";
	cout << "\n==================================\n";


	sort(v.begin(), v.end());
	it = unique(v.begin(), v.end());
	//v.resize(distance(v.begin(), it));
	v.resize(it - v.begin());

	for (int i : v) cout << i << " ";
	cout << "\n==================================\n";
}