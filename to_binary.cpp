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
	
	cout << "���� " << num << " �� 2������\n";
	/* integer to binary string */
	// 1. bitset ���
	bitset<100> bs(num);
	string s = bs.to_string();
	s = s.substr(s.find_last_of('1'));
	cout << s << "\n";


	// 2. bit ������ ���Ͽ� ���ϱ�
	cout << to_binary(num) << "\n";


	cout << "========================================\n";


	/* binart string to long */
	cout << "������ ���ڿ� " << s << " �� ������\n";
	bitset<100> bs2(s);
	cout << bs2.to_ulong() << "\n";

	return 0;
}