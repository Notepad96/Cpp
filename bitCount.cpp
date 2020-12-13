#include <iostream>
using namespace std;

int main() {
	int nums[6] = { 1, 4, 15, 35, 125, 1024 };
	for (int i = 0; i < 6; i++) {
		for (int k = 0; k < 32; k++) {
			if (nums[i] < (1 << k)) {
				cout << nums[i] << "의 비트 수 : " << k << "\n";
				break;
			}
		}
	}

    return 0;
}