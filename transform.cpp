#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int, string> pis;

int main() {
	// 1. 숫자 vector
	vector<int> v = { 10, 20, 30, 40, 50 };

	for (int i : v) cout << i << " ";
	cout << "\n";

	// 30 이상의 값이라면 10을 곱한다.
	transform(v.begin(), v.end(), v.begin(), [](int n) {
		if (n >= 30) return n * 10;
		else return n;
		});

	for (int i : v) cout << i << " ";
	cout << "\n================================\n";


	// 2. 문자열
	string s = "abDGSsdFDSafds";
	cout << s << "\n";
	transform(s.begin(), s.end(), s.begin(), ::tolower);	// 소문자 변환
	cout << s << "\n";
	transform(s.begin(), s.end(), s.begin(), ::toupper);	// 대문자 변환
	cout << s << "\n================================\n";


	vector<string> vs = { "daFDf", "qwFD", "AVD", "SDFtr" };
	for (string s : vs) cout << s << " ";
	cout << "\n";

	// vector 문자열들 소문자 변환
	for (int i = 0; i < vs.size(); i++) {
		transform(vs[i].begin(), vs[i].end(), vs[i].begin(), ::tolower);
	}

	for (string s : vs) cout << s << " ";
	cout << "\n";

	return 0;
}