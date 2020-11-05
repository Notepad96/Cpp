#include <iostream>
using namespace std;

bool twoN(int num) {
	return (num & (num - 1)) == 0;
}

int main() {
	int n[6] = { 1, 17, 64, 1025, 2048, 2047 };
	
	for (int i = 0; i < 6; i++) {
		if (twoN(n[i])) {
			cout << n[i] << "는 2의 n제곱 수이다.\n";
		}
		else {
			cout << n[i] << "는 2의 n제곱 수가 아니다.\n";
		}
	}

	return 0;
}