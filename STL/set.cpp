#include <iostream>
#include <set>
using namespace std;

int main() {
	
	/* ������ */
	set<int> set;		// ��������, �⺻ �� : less<int>
	//set<int, greater<int>> set;		//��������
	
	/* ����, ���� */
	set.insert(30);
	set.insert(40);
	set.insert(10);
	set.insert(20);
	set.insert(50);
	set.insert(50);		// �ߺ� ���� x
	set.erase(20);

	for (int i : set) {
		cout << i << " ";
	}
	cout << "\n";
	for (auto it = set.begin(); it != set.end(); it++) {
		cout << *it << " ";
	}
	cout << "\n";


	/* �� Ž�� */
	// 1. ���� �������� Ȯ��
	auto it = set.insert(50);	// pair< set<int>::iterator, bool >
	if (it.second) {
		cout << *it.first << "���� ����\n";
	}
	else {
		cout << *it.first << "���� ����\n";
	}


	// 2. ���� Ž��. set�� �ߺ��� �Ұ��ϹǷ� 0 �Ǵ� 1�� ��
	cout << "���� 60 ���� : " << set.count(60) << "\n";


	// 3. find �Լ��� Ž��
	if (set.find(50) == set.end()) {	// find�� �������� ������ set.end()�� ����
		cout << "���� 50�� ���� ����.\n";
	}
	else {
		cout << "���� 50�� ���� �����Ѵ�.\n";
	}


	return 0;
}