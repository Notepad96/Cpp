#include <iostream>
#include <string>
using namespace std;

int main() {
	string s  = "1000";
	int num = 2333;


	// string to integer
	cout << "- ���ڿ� int������ ��ȯ -\n";
	int num2 = stoi(s);	// stod => double Ÿ��, stoll => long long Ÿ��
	cout << "���� : " << num << " + " << num2 << " = " << num + num2 << "\n";

	cout << "====================================\n";

	// integer to string
	cout << "- ���� ���ڿ��� ��ȯ -\n";
	string s2 = to_string(num);
	cout << "���ڿ� : " << s << " + " << s2 << " = " << s + s2 << "\n";


	return 0;
}