#include <iostream>
#include <queue>
using namespace std;

int main() {
	queue<int> q;

	if (q.empty()) {
		cout << "ť�� ����ֽ��ϴ�.\n";
	}

	q.push(5);	// 5
	q.push(3);	// 5 3
	q.push(2);	// 5 3 2
	q.push(4);	// 5 3 2 4
	q.push(7);	// 5 3 2 4 7
	q.pop();	// 3 2 4 7

	cout << "������ : " << q.size() << "\n";
	cout << "�� �� : " << q.front() << "\n";
	cout << "�� �� : " << q.back() << "\n";

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << "\n";

	return 0;
}
