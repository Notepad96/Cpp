#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}
	cout << "\n";
}

// vector<pair<int, int>> 이기 때문에 인자 타입은 pair<int, int> 이 된다.
// vector<int>의 vector였다면 인자 타입은 int 가 된다.
bool desc(pair<int, int> a, pair<int, int> b) {
	// 각 원소들을 first에 관해서는 오름차순 정렬을, second에 관해서는 내림차순으로 정렬한다.
	if (a.first == b.first) return a.second > b.second;
	else return a.first < b.first;
}

int main() {
	vector<int> v;

	for (int i = 1; i < 11; i++) v.push_back(i);
	print(v);

	// 오름차순 정렬
	sort(v.begin(), v.end());



	// 내림차순 정렬
	// 1. reverse 반복자인 rbegin, rend 이용
	sort(v.rbegin(), v.rend());	


	// 2. greater를 사용하여서 내림차순. less는 오름차순
	sort(v.begin(), v.end(), greater<int>());


	// 3 람다 방식으로 작성(아래 함수로 임의 순으로 정렬 방식과 동일)
	sort(v.begin(), v.end(), [](int a, int b) {	
			return a > b;
		});
		
	print(v);


	
	vector<pair<int, int>> v2;
	v2.push_back(make_pair(5, 3));
	v2.push_back(make_pair(5, 1));
	v2.push_back(make_pair(4, 2));
	v2.push_back(make_pair(4, 8));

	// 함수로 임의 순으로 정렬. 이는 오름/내림차순뿐 아니라 임의로 순서를 지정해낼 수 있다.
	sort(v2.begin(), v2.end(), desc);

	for (int i = 0; i < v2.size(); i++) {
		cout << v2[i].first << ":" << v2[i].second << " ";
	}
	cout << "\n";

	return 0;
}
