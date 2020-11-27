#include <iostream>
#include <random>
using namespace std;

int main() {
	random_device rd;

	cout << "================랜덤 수 구하기================\n";
	cout << "랜덤 수 범위 \n";
	cout << rd.min() << " <=  rd  <= ";
	cout << rd.max() << "\n";
	cout << "랜덤 수 : " << rd() << "\n";


	cout << "\n================1 ~ 10 랜덤 수 50개================\n";
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 10; k++) {
			int num = rd() % 10;		// 0 ~ 9 의 수를 갖는다.
			num += 1;					// 1 ~ 10 의 수를 갖는다.
			
			//int num = rd() % 10 + 1	// 한줄로 간단히 작성
			cout << num << " ";
		}
		cout << "\n";
	}

	return 0;
}