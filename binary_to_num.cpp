#include <iostream>
#include <string>
using namespace std;

int binary_to_num(string s, int num = 2) {
	return stoi(s, nullptr, num);
}

int main() {
	string s = "10001", s2 = "11112", s3 = "333";
	cout << s << "(2진수) : " << binary_to_num(s) << "\n";
	cout << s2 << "(3진수) : " << binary_to_num(s2, 3) << "\n";
	cout << s3 << "(4진수) : " << binary_to_num(s3, 4) << "\n";

    return 0;
}