#include <iostream>
#include <string>
#include <bitset>
using namespace std;

string to_binary(int num) {
	string s = "";
	while (num > 0) {
		if (num % 2 == 1) s = "1" + s;
		else s = "0" + s;
		num >>= 1;
	}
	return s;
}

int main() {
	int num = 54321;
	
	cout << "숫자 " << num << " 을 2진수로\n";
	/* integer to binary string */
	// 1. bitset 사용
	bitset<100> bs(num);
	string s = bs.to_string();
	s = s.substr(s.find_last_of('1'));
	cout << s << "\n";


	// 2. bit 연산을 통하여 구하기
	cout << to_binary(num) << "\n";


	cout << "========================================\n";


	/* binart string to long */
	cout << "이진수 문자열 " << s << " 을 정수로\n";
	bitset<100> bs2(s);
	cout << bs2.to_ulong() << "\n";

	return 0;
}