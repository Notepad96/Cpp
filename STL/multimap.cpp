#include <iostream>
#include <map>
using namespace std;

int main() {
	
	/* 생성자 */
	//multimap<int, int> m;		// <key, value> key 오름차순, 기본 값 : less<int>
	multimap<int, int, greater<int>> m;

	/* 삽입, 삭제 */
	m.insert(pair<int, int>(2, 20));	// pair객체를 생성하여 삽입
	m.insert(make_pair(3, 30));
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 40));
	m.insert(make_pair(5, 50));
	m.insert(make_pair(4, 60));
	m.erase(5);

	
	/* 접근 */
	for (pair<int, int> ii : m) {
		cout << ii.first << ":" << ii.second << " ";
	}
	cout << "\n";

	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first << ":" << it->second << " ";
	}
	cout << "\n";

	cout << "key 3 개수 : " << m.count(3) << "\n";

	/* 탐색 */
	//auto it = m.find(5);
	map<int, int>::iterator it = m.find(3);		// key 3 원소 중 맨 앞의 반복자 갖는다.
	if ( it == m.end()) {
		cout << "해당 key는 존재하지 않습니다.\n";
	}
	else {
		cout << "key " << it->first << "중 맨 앞 값은 : " << it->second << "\n";
	}


	// key = 3인 원소들 탐색
	for (auto it = m.lower_bound(3); it != m.upper_bound(3); it++) {
		cout << it->first << ":" << it->second << " ";
	}
	cout << "\n";

	return 0;
}