#include <iostream>
#include <set>
using namespace std;

int main() {
	
	/* 생성자 */
	set<int> set;		// 오름차순, 기본 값 : less<int>
	//set<int, greater<int>> set;		//내림차순
	
	/* 삽입, 삭제 */
	set.insert(30);
	set.insert(40);
	set.insert(10);
	set.insert(20);
	set.insert(50);
	set.insert(50);		// 중복 저장 x
	set.erase(20);

	for (int i : set) {
		cout << i << " ";
	}
	cout << "\n";
	for (auto it = set.begin(); it != set.end(); it++) {
		cout << *it << " ";
	}
	cout << "\n";


	/* 값 탐색 */
	// 1. 삽입 성공여부 확인
	auto it = set.insert(50);	// pair< set<int>::iterator, bool >
	if (it.second) {
		cout << *it.first << "삽입 성공\n";
	}
	else {
		cout << *it.first << "삽입 실패\n";
	}


	// 2. 개수 탐색. set은 중복이 불가하므로 0 또는 1의 값
	cout << "원소 60 개수 : " << set.count(60) << "\n";


	// 3. find 함수로 탐색
	if (set.find(50) == set.end()) {	// find는 존재하지 않으면 set.end()를 리턴
		cout << "원소 50은 현재 없다.\n";
	}
	else {
		cout << "원소 50은 현재 존재한다.\n";
	}


	return 0;
}