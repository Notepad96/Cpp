#include <iostream>
using namespace std;

bool twoN(int num) {
	return (num & (num - 1)) == 0;
}

int main() {
	int n[6] = { 1, 17, 64, 1025, 2048, 2047 };
	
	for (int i = 0; i < 6; i++) {
		if (twoN(n[i])) {
			cout << n[i] << "�� 2�� n���� ���̴�.\n";
		}
		else {
			cout << n[i] << "�� 2�� n���� ���� �ƴϴ�.\n";
		}
	}

	return 0;
}