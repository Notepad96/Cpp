#include <iostream>
#include <queue>	
using namespace std;

int main() {

	priority_queue<int> pq;	// �⺻�� : �������� 
	//priority_queue<int, vector<int>, greater<int>> pq; // ��������

	if (pq.empty()) {
		cout << "�켱 ���� ť�� ����ֽ��ϴ�.\n";
	}

	pq.push(5);	// 5
	pq.push(3);	// 3 5
	pq.push(2);	// 2 3 5
	pq.push(4);	// 2 3 4 5
	pq.push(7);	// 2 3 4 5 7

	cout << "������ : " << pq.size() << "\n";

	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << "\n";

	return 0;
}
