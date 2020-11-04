#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	
	/* ������ */
	map<int, int> m;		// <key, value> key ��������, �⺻ �� : less<int>
	//map<int, int, greater<int>> m;

	/* ����, ���� */
	m[1] = 10;	// key=1, value=10, [] �����ڸ� ����Ͽ� ����
	m.insert(pair<int, int>(2, 20));	// pair��ü�� �����Ͽ� ����
	m.insert(make_pair(3, 30));
	m[4] = 40;
	m[5] = 50;
	m[1] = 50;	// key�� �̹� �����ϹǷ� value�� ����ȴ�.
	m.erase(5);

	
	/* ���� */
	for (pair<int, int> ii : m) {
		cout << ii.first << ":" << ii.second << " ";
	}
	cout << "\n";

	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first << ":" << it->second << " ";
	}
	cout << "\n";


	/* Ž�� */
	//auto it = m.find(5);
	map<int, int>::iterator it = m.find(1);
	if ( it == m.end()) {
		cout << "�ش� key�� �������� �ʽ��ϴ�.\n";
	}
	else {
		cout << "key " << it->first << "�� ���� : " << it->second << "\n";
	}



	/* value ���� �������� ���� */
	vector<pair<int, int>> v(m.begin(), m.end());	// �ݺ��ڸ� �޴� ������

	sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {	// �͸� �Լ� ���
		return a.second < b.second;
		});

	for (pair<int, int> ii : v) {
		cout << ii.first << ":" << ii.second << " ";
	}
	cout << "\n";

	return 0;
}