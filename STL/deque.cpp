#include <iostream>
#include <deque>
using namespace std;

int main() {

	/* 생성자 */
	deque<int> dq;
	//deque<int> dq(5); // size = 5만큼 int의 기본값 0으로 초기화
	//deque<int> dq(5, 2); // size = 5 만큼 2로 초기화
	
	// 삽입, 삭제
	dq.push_back(3);	// 3
	dq.push_front(5);	// 5 3
	dq.push_front(2);	// 2 5 3
	dq.push_back(1);	// 2 5 3 1
	dq.pop_front();		// 5 3 1
	for (int i : dq) {
		cout << i << " ";
	}
	cout << "\n";

	cout << "길이 : " << dq.size() << "\n";
	cout << "맨앞 : " << dq.front() << " 맨뒤 : " << dq.back() << "\n";

	// 새로 초기화
	dq.assign(3, 4);	// size = 3 만큼 4로 초기화
	for (int i = 0; i < dq.size(); i++) {
		cout << dq[i] << " ";
	}
	cout << "\n";

	return 0;
}