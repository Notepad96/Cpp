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

// vector<pair<int, int>> �̱� ������ ���� Ÿ���� pair<int, int> �� �ȴ�.
// vector<int>�� vector���ٸ� ���� Ÿ���� int �� �ȴ�.
bool desc(pair<int, int> a, pair<int, int> b) {
	// �� ���ҵ��� first�� ���ؼ��� �������� ������, second�� ���ؼ��� ������������ �����Ѵ�.
	if (a.first == b.first) return a.second > b.second;
	else return a.first < b.first;
}

int main() {
	vector<int> v;

	for (int i = 1; i < 11; i++) v.push_back(i);
	print(v);

	// �������� ����
	sort(v.begin(), v.end());



	// �������� ����
	// 1. reverse �ݺ����� rbegin, rend �̿�
	sort(v.rbegin(), v.rend());	


	// 2. greater�� ����Ͽ��� ��������. less�� ��������
	sort(v.begin(), v.end(), greater<int>());


	// 3 ���� ������� �ۼ�(�Ʒ� �Լ��� ���� ������ ���� ��İ� ����)
	sort(v.begin(), v.end(), [](int a, int b) {	
			return a > b;
		});
		
	print(v);


	
	vector<pair<int, int>> v2;
	v2.push_back(make_pair(5, 3));
	v2.push_back(make_pair(5, 1));
	v2.push_back(make_pair(4, 2));
	v2.push_back(make_pair(4, 8));

	// �Լ��� ���� ������ ����. �̴� ����/���������� �ƴ϶� ���Ƿ� ������ �����س� �� �ִ�.
	sort(v2.begin(), v2.end(), desc);

	for (int i = 0; i < v2.size(); i++) {
		cout << v2[i].first << ":" << v2[i].second << " ";
	}
	cout << "\n";

	return 0;
}
