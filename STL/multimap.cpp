#include <iostream>
#include <map>
using namespace std;

int main() {
	
	/* ������ */
	//multimap<int, int> m;		// <key, value> key ��������, �⺻ �� : less<int>
	multimap<int, int, greater<int>> m;

	/* ����, ���� */
	m.insert(pair<int, int>(2, 20));	// pair��ü�� �����Ͽ� ����
	m.insert(make_pair(3, 30));
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 40));
	m.insert(make_pair(5, 50));
	m.insert(make_pair(4, 60));
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

	cout << "key 3 ���� : " << m.count(3) << "\n";

	/* Ž�� */
	//auto it = m.find(5);
	map<int, int>::iterator it = m.find(3);		// key 3 ���� �� �� ���� �ݺ��� ���´�.
	if ( it == m.end()) {
		cout << "�ش� key�� �������� �ʽ��ϴ�.\n";
	}
	else {
		cout << "key " << it->first << "�� �� �� ���� : " << it->second << "\n";
	}


	// key = 3�� ���ҵ� Ž��
	for (auto it = m.lower_bound(3); it != m.upper_bound(3); it++) {
		cout << it->first << ":" << it->second << " ";
	}
	cout << "\n";

	return 0;
}