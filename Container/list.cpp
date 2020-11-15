#include <iostream>
#include <list>
using namespace std;

int main() {

	/* ������ */
	list<int> list;
	//list<int> list(4);
	//list<int> list(5, 3);


	/* ����, ���� */
	list.push_back(5);		// 5
	list.push_front(3);		// 3 5
	list.push_back(2);		// 3 5 2
	list.push_front(4);		// 4 3 5 2
	list.pop_front();		// 3 5 2
	list.pop_back();		// 3 5

	/* ����Ʈ ����(greater<int>() : ��������) */
	list.sort(greater<int>());

	for (int i : list) {
		cout << i << " ";
	}
	cout << "\n";

	/* ����Ʈ ���� */
	list.clear();


	/* �ߺ��� ���� �����ϱ� */

	// (1 2 3 4) X 5 ��
	for (int i = 0; i < 5; i++) {
		for (int k = 1; k < 5; k++) {
			list.push_back(k);
		}
	}

	list.sort();	// ����Ʈ �����ϱ�(�⺻�� ��������)
	list.unique();	// �����ϴ� �ߺ��� ���� ����
	for (auto i = list.begin(); i != list.end(); i++) {
		cout << *i << " ";
	}
	cout << "\n";

	return 0;
}