#include <iostream>
#include <set>
using namespace std;

int main() {
	
	/* 생성자 */
	//multiset<int> mset;		// 오름차순, 기본 값 : less<int>
	multiset<int, greater<int>> mset;		//내림차순
	
	/* 삽입, 삭제 */
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


	/* 값 탐색 */
	// 1. 개수 탐색. multiset은 중복허용이므로 1이상의 값도 얻을 수 있다.
	cout << "원소 50 개수 : " << mset.count(50) << "\n";


	// 2. find 함수로 탐색
	if (mset.find(50) == mset.end()) {	// find는 존재하지 않으면 mset.end()를 리턴
		cout << "원소 50은 현재 없다.\n";
	}
	else {
		cout << "원소 50은 현재 존재한다.\n";
	}

	// 3. equal_range = pair< lower_bound(), upper_bound() >
	auto range = mset.equal_range(40);
	cout << *mset.lower_bound(40) << "\n";	// 40의 시작 반복자
	cout << *mset.upper_bound(40) << "\n";	// 40의 종료 반복자
	for (auto it = range.first; it != range.second; it++) {
		cout << *it << " ";
	}
	cout << "\n";

	return 0;
}