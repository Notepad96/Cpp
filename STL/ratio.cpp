#include <iostream>
#include <ratio>
using namespace std;

int main() {
	
	typedef ratio<1, 3> one;
	typedef ratio<2, 4> two;

	cout << "one = " << one::num << "/" << one::den << "\n";

	cout << "two = " << two::num << "/" << two::den << "\n";
	cout << "======================================\n";
	


	// ���ϱ�
	typedef ratio_add<one, two> sum;
	cout << "���� : 1/3 + 2/4 = " << sum::num << "/" << sum::den << "\n";
	double num = (double)sum::num / sum::den;
	cout << "���ڷ� ��ȯ : " <<  num << "\n\n";

	typedef ratio_subtract<one, two> sub;	// ����

	typedef ratio_multiply<one, two> mul;	// ���ϱ�

	typedef ratio_divide<one, two> div;		// ������
	cout << "������ : 1/3 / 2/4 = " << div::num << "/" << div::den << "\n";

	cout << "======================================\n";



	if (ratio_less<one, two>::value) {
		cout << "one�� two �̸��̴�.\n";
	}
	else {
		cout << "two�� one �̻��̴�.\n";
	}
	
	cout << "======================================\n";



	cout << "kilo = " << kilo::num << "/" << kilo::den << "\n";
	cout << "giga = " << giga::num << "/" << giga::den << "\n";
	cout << "micro = " << micro::num << "/" << micro::den << "\n";

	return 0;
}