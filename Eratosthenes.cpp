#include <iostream>
#include <vector>
#define START 20	// 2 이상
#define END 100
using namespace std;

int main() {
	// index는 0부터 시작하므로 수와 index를 맞추기 위하여 크기 END+1로 생성
	vector<bool> v(END + 1, true);


	// 에라토스테네스의 체
	for (int i = 2; i * i < END + 1; i++) {
		for (int k = i * i; k < END + 1; k += i) {
			v[k] = false;
		}
	}


	// 결과
	cout << "2 부터 ~ " << END << "까지의 소수들 : \n";
	for (int i = 2; i < END + 1; i++) if (v[i]) cout << i << ", ";
	cout << "\n\n";

	cout << START << " 부터 ~ " << END << "까지의 소수들 : \n";
	for (int i = START; i < END + 1; i++) if (v[i]) cout << i << ", ";
	cout << "\n";

    return 0;
}