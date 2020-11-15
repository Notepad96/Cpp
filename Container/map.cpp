#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	
	/* 생성자 */
	map<int, int> m;		// <key, value> key 오름차순, 기본 값 : less<int>
	//map<int, int, greater<int>> m;

	/* 삽입, 삭제 */
	m[1] = 10;	// key=1, value=10, [] 연산자를 사용하여 삽입
	m.insert(pair<int, int>(2, 20));	// pair객체를 생성하여 삽입
	m.insert(make_pair(3, 30));
	m[4] = 40;
	m[5] = 50;
	m[1] = 50;	// key가 이미 존재하므로 value이 변경된다.
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


	/* 탐색 */
	//auto it = m.find(5);
	map<int, int>::iterator it = m.find(1);
	if ( it == m.end()) {
		cout << "해당 key는 존재하지 않습니다.\n";
	}
	else {
		cout << "key " << it->first << "의 값은 : " << it->second << "\n";
	}



	/* value 값을 기준으로 정렬 */
	vector<pair<int, int>> v(m.begin(), m.end());	// 반복자를 받는 생성자

	sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {	// 익명 함수 사용
		return a.second < b.second;
		});

	for (pair<int, int> ii : v) {
		cout << ii.first << ":" << ii.second << " ";
	}
	cout << "\n";

	return 0;
}