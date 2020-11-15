#include <iostream>
#include <list>
using namespace std;

int main() {

	/* 생성자 */
	list<int> list;
	//list<int> list(4);
	//list<int> list(5, 3);


	/* 삽입, 삭제 */
	list.push_back(5);		// 5
	list.push_front(3);		// 3 5
	list.push_back(2);		// 3 5 2
	list.push_front(4);		// 4 3 5 2
	list.pop_front();		// 3 5 2
	list.pop_back();		// 3 5

	/* 리스트 정렬(greater<int>() : 내림차순) */
	list.sort(greater<int>());

	for (int i : list) {
		cout << i << " ";
	}
	cout << "\n";

	/* 리스트 비우기 */
	list.clear();


	/* 중복된 원소 제거하기 */

	// (1 2 3 4) X 5 번
	for (int i = 0; i < 5; i++) {
		for (int k = 1; k < 5; k++) {
			list.push_back(k);
		}
	}

	list.sort();	// 리스트 정렬하기(기본값 오름차순)
	list.unique();	// 연속하는 중복된 원소 제거
	for (auto i = list.begin(); i != list.end(); i++) {
		cout << *i << " ";
	}
	cout << "\n";

	return 0;
}