#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool sosu(int num) {
	if (num < 2) return false;
	int a = (int) sqrt(num);
	for (int i = 2; i <= a; i++) if (num % i == 0) return false;
	return true;
}

int main() {
	vector<int> v = { 1, 2, 3, 4, 5, 13, 33, 22, 41, 91 };
	for (int i : v) {
		if (sosu(i)) {
			cout << i << " 는 소수 입니다.\n";
		}
		else {
			cout << i << " 는 소수가 아닙니다.\n";
		}
	}

	return 0;
}