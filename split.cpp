#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> split(string s, string divid) {
	vector<string> v;
	char* c = strtok((char*)s.c_str(), divid.c_str());
	while (c) {
		v.push_back(c);
		c = strtok(NULL, divid.c_str());
	}
	return v;
}

vector<string> split2(string s, string divid) {
	vector<string> v;
	int start = 0;
	int d = s.find(divid);
	while (d != -1){
		v.push_back(s.substr(start, d - start));
		start = d + 1;
		d = s.find(divid, start);
	} 
	v.push_back(s.substr(start, d - start));

	return v;
}

int main() {
	string s = "ab,cdef gh-iklmn";
	string s2 = "ab,cdef,gh,iklmn";

	vector<string> v = split(s, ", -");
	vector<string> v2 = split2(s2, ",");

	cout << "문자열 1 : " << s << "\n";
	for (string i : v) {
		cout << i << "\n";
	}
	cout << "====================\n";
	cout << "문자열 2 : " << s2 << "\n";
	for (string i : v2) {
		cout << i << "\n";
	}

	return 0;
}