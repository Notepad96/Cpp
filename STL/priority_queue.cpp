#include <iostream>
#include <queue>	
using namespace std;

int main() {

	priority_queue<int> pq;	// 기본값 : 오름차순 
	//priority_queue<int, vector<int>, greater<int>> pq; // 내림차순

	if (pq.empty()) {
		cout << "우선 순위 큐가 비어있습니다.\n";
	}

	pq.push(5);	// 5
	pq.push(3);	// 3 5
	pq.push(2);	// 2 3 5
	pq.push(4);	// 2 3 4 5
	pq.push(7);	// 2 3 4 5 7

	cout << "사이즈 : " << pq.size() << "\n";

	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << "\n";

	return 0;
}
