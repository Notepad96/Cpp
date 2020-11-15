#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v = { 10, 35, 45, 27, 10 };

	for (int i : v) cout << i << " ";
	cout << "\n";

	replace(v.begin(), v.end(), 10, 90);	// ��� 10�� 90����

	for (int i : v) cout << i << " ";
	cout << "\n==================================\n";

	// Ȧ���� ���Ҹ� -7���� ��ȯ
	replace_if(v.begin(), v.end(), [](int a) {return a % 2 == 1; }, -7 );
	for (int i : v) cout << i << " ";
	cout << "\n==================================\n";
}