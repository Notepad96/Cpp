#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a = 10, b = 30, c= 50, d = 20, e = 444;

	cout << a << "와 " << e << " 중 " << max(a, e) << "가 더 크다.\n";

	cout << b << "와 " << c << "와 " << d << " 중 " << min({ b, c, d }) << "가 제일 작다.\n";

	pair<int, int> mm = minmax({ a, b, c, d, e });

	cout << a << "와 " << b << "와 " << c << "와 " << d << "와 " << e;
	cout << " 중 가장 작은 값 = " << mm.first << " 이며 가장 큰 값 = " << mm.second << " 입니다.\n";

	return 0;
}