#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int, string> pis;

int main() {
	// 1. ���� vector
	vector<int> v = { 10, 20, 30, 40, 50 };

	for (int i : v) cout << i << " ";
	cout << "\n";

	// 30 �̻��� ���̶�� 10�� ���Ѵ�.
	transform(v.begin(), v.end(), v.begin(), [](int n) {
		if (n >= 30) return n * 10;
		else return n;
		});

	for (int i : v) cout << i << " ";
	cout << "\n================================\n";


	// 2. ���ڿ�
	string s = "abDGSsdFDSafds";
	cout << s << "\n";
	transform(s.begin(), s.end(), s.begin(), ::tolower);	// �ҹ��� ��ȯ
	cout << s << "\n";
	transform(s.begin(), s.end(), s.begin(), ::toupper);	// �빮�� ��ȯ
	cout << s << "\n================================\n";


	vector<string> vs = { "daFDf", "qwFD", "AVD", "SDFtr" };
	for (string s : vs) cout << s << " ";
	cout << "\n";

	// vector ���ڿ��� �ҹ��� ��ȯ
	for (int i = 0; i < vs.size(); i++) {
		transform(vs[i].begin(), vs[i].end(), vs[i].begin(), ::tolower);
	}

	for (string s : vs) cout << s << " ";
	cout << "\n";

	return 0;
}