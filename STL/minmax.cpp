#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a = 10, b = 30, c= 50, d = 20, e = 444;

	cout << a << "�� " << e << " �� " << max(a, e) << "�� �� ũ��.\n";

	cout << b << "�� " << c << "�� " << d << " �� " << min({ b, c, d }) << "�� ���� �۴�.\n";

	pair<int, int> mm = minmax({ a, b, c, d, e });

	cout << a << "�� " << b << "�� " << c << "�� " << d << "�� " << e;
	cout << " �� ���� ���� �� = " << mm.first << " �̸� ���� ū �� = " << mm.second << " �Դϴ�.\n";

	return 0;
}