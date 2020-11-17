#include <iostream>
#include <string>
#include <cctype>	// or <ctype.h>
using namespace std;

int main() {
	string s = "34rewRE d3fs5R f0z";
	cout << "문자열 s = " << s << "\n";

	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << " 는 ";
		if (isdigit(s[i])) {
			cout << "숫자 입니다.";
		}
		else if (isspace(s[i])) {
			cout << "공백 입니다.";
		}
		else if (isupper(s[i])) {
			cout << "대문자 입니다.";
			s[i] = tolower(s[i]);	// 소문자 변환
			//s[i] += 32;	// 소문자 변환
		}
		else if (islower(s[i])) {
			cout << "소문자 입니다.";
			s[i] = toupper(s[i]);	// 대문자 변환
			//s[i] -= 32;	// 대문자 변환
		}
		else if (isalpha(s[i])) {
			cout << "알파벳 입니다.";
		}
		cout << "\n";
	}

	cout << "문자열 s = " << s << "\n";

	return 0;
}