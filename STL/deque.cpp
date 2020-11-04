#include <iostream>
#include <deque>
using namespace std;

int main() {

	/* ������ */
	deque<int> dq;
	//deque<int> dq(5); // size = 5��ŭ int�� �⺻�� 0���� �ʱ�ȭ
	//deque<int> dq(5, 2); // size = 5 ��ŭ 2�� �ʱ�ȭ
	
	// ����, ����
	dq.push_back(3);	// 3
	dq.push_front(5);	// 5 3
	dq.push_front(2);	// 2 5 3
	dq.push_back(1);	// 2 5 3 1
	dq.pop_front();		// 5 3 1
	for (int i : dq) {
		cout << i << " ";
	}
	cout << "\n";

	cout << "���� : " << dq.size() << "\n";
	cout << "�Ǿ� : " << dq.front() << " �ǵ� : " << dq.back() << "\n";

	// ���� �ʱ�ȭ
	dq.assign(3, 4);	// size = 3 ��ŭ 4�� �ʱ�ȭ
	for (int i = 0; i < dq.size(); i++) {
		cout << dq[i] << " ";
	}
	cout << "\n";

	return 0;
}