#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v = { 10, 40, 50, 30, 20 };

	for (int i : v) cout << i << " ";
	cout << "\n================================\n";

	reverse(v.begin(), v.begin() + 4);	// 1 ~ 4�� ° ���ҿ� ���ؼ��� reverse

	for (int i : v) cout << i << " ";
	cout << "\n================================\n";



	sort(v.begin(), v.end());

	for (int i : v) cout << i << " ";
	cout << "\n================================\n";

	reverse(v.begin(), v.end());

	for (int i : v) cout << i << " ";
	cout << "\n================================\n";

	return 0;
}