#include <iostream>
#include <ratio>
using namespace std;

int main() {
	
	typedef ratio<1, 3> one;
	typedef ratio<2, 4> two;

	cout << "one = " << one::num << "/" << one::den << "\n";

	cout << "two = " << two::num << "/" << two::den << "\n";
	cout << "======================================\n";
	


	// 더하기
	typedef ratio_add<one, two> sum;
	cout << "덧셈 : 1/3 + 2/4 = " << sum::num << "/" << sum::den << "\n";
	double num = (double)sum::num / sum::den;
	cout << "숫자로 변환 : " <<  num << "\n\n";

	typedef ratio_subtract<one, two> sub;	// 빼기

	typedef ratio_multiply<one, two> mul;	// 곱하기

	typedef ratio_divide<one, two> div;		// 나누기
	cout << "나누기 : 1/3 / 2/4 = " << div::num << "/" << div::den << "\n";

	cout << "======================================\n";



	if (ratio_less<one, two>::value) {
		cout << "one은 two 미만이다.\n";
	}
	else {
		cout << "two은 one 이상이다.\n";
	}
	
	cout << "======================================\n";



	cout << "kilo = " << kilo::num << "/" << kilo::den << "\n";
	cout << "giga = " << giga::num << "/" << giga::den << "\n";
	cout << "micro = " << micro::num << "/" << micro::den << "\n";

	return 0;
}