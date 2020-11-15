#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v = { 10, 40, 50, 30, 20 };

	cout << "vector : ";
	for (int i : v) cout << i << " ";
	cout << "\n================================\n";

	rotate(v.begin(), v.begin() + 1, v.end());
	cout << "1ĭ�� ���� �̵� : ";
	for (int i : v) cout << i << " ";
	cout << "\n================================\n";


	rotate(v.begin(), v.begin() + 2, v.end());
	cout << "2ĭ�� ���� �̵� : ";
	for (int i : v) cout << i << " ";
	cout << "\n================================\n";


	rotate(v.begin(), v.begin() + 3, v.end());
	cout << "3ĭ�� ���� �̵� : ";
	for (int i : v) cout << i << " ";
	cout << "\n================================\n";


	rotate(v.begin(), v.end() - 1 , v.end());
	cout << "1ĭ�� ������ �̵� : ";
	for (int i : v) cout << i << " ";
	cout << "\n================================\n";


	rotate(v.begin(), v.end() - 3, v.end());
	cout << "3ĭ�� ������ �̵� : ";
	for (int i : v) cout << i << " ";
	cout << "\n================================\n";

	return 0;
}