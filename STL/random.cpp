#include <iostream>
#include <random>
using namespace std;

int main() {
	random_device rd;

	cout << "================���� �� ���ϱ�================\n";
	cout << "���� �� ���� \n";
	cout << rd.min() << " <=  rd  <= ";
	cout << rd.max() << "\n";
	cout << "���� �� : " << rd() << "\n";


	cout << "\n================1 ~ 10 ���� �� 50��================\n";
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 10; k++) {
			int num = rd() % 10;		// 0 ~ 9 �� ���� ���´�.
			num += 1;					// 1 ~ 10 �� ���� ���´�.
			
			//int num = rd() % 10 + 1	// ���ٷ� ������ �ۼ�
			cout << num << " ";
		}
		cout << "\n";
	}

	return 0;
}