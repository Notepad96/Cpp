#include <iostream>
#include <set>
using namespace std;

int main() {
	
	/* ������ */
	//multiset<int> mset;		// ��������, �⺻ �� : less<int>
	multiset<int, greater<int>> mset;		//��������
	
	/* ����, ���� */
	mset.insert(30);
	mset.insert(50);
	mset.insert(50);
	mset.insert(40);
	mset.insert(10);
	mset.insert(20);
	mset.insert(40);
	mset.insert(50);	
	mset.erase(20);

	for (int i : mset) {
		cout << i << " ";
	}
	cout << "\n";
	for (auto it = mset.begin(); it != mset.end(); it++) {
		cout << *it << " ";
	}
	cout << "\n";


	/* �� Ž�� */
	// 1. ���� Ž��. multiset�� �ߺ�����̹Ƿ� 1�̻��� ���� ���� �� �ִ�.
	cout << "���� 50 ���� : " << mset.count(50) << "\n";


	// 2. find �Լ��� Ž��
	if (mset.find(50) == mset.end()) {	// find�� �������� ������ mset.end()�� ����
		cout << "���� 50�� ���� ����.\n";
	}
	else {
		cout << "���� 50�� ���� �����Ѵ�.\n";
	}

	// 3. equal_range = pair< lower_bound(), upper_bound() >
	auto range = mset.equal_range(40);
	cout << *mset.lower_bound(40) << "\n";	// 40�� ���� �ݺ���
	cout << *mset.upper_bound(40) << "\n";	// 40�� ���� �ݺ���
	for (auto it = range.first; it != range.second; it++) {
		cout << *it << " ";
	}
	cout << "\n";

	return 0;
}