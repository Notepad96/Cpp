#include <iostream>
#include <string>
#include <cctype>	// or <ctype.h>
using namespace std;

int main() {
	string s = "34rewRE d3fs5R f0z";
	cout << "���ڿ� s = " << s << "\n";

	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << " �� ";
		if (isdigit(s[i])) {
			cout << "���� �Դϴ�.";
		}
		else if (isspace(s[i])) {
			cout << "���� �Դϴ�.";
		}
		else if (isupper(s[i])) {
			cout << "�빮�� �Դϴ�.";
			s[i] = tolower(s[i]);	// �ҹ��� ��ȯ
			//s[i] += 32;	// �ҹ��� ��ȯ
		}
		else if (islower(s[i])) {
			cout << "�ҹ��� �Դϴ�.";
			s[i] = toupper(s[i]);	// �빮�� ��ȯ
			//s[i] -= 32;	// �빮�� ��ȯ
		}
		else if (isalpha(s[i])) {
			cout << "���ĺ� �Դϴ�.";
		}
		cout << "\n";
	}

	cout << "���ڿ� s = " << s << "\n";

	return 0;
}