#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main() {
	vector<pair<int, int>> v;
	v.push_back(make_pair(5, 6));
	v.push_back(make_pair(3, 2));
	v.push_back(make_pair(1, 8));
	v.push_back(make_pair(4, 3));
	
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << ":" << v[i].second << "\n";
	}
	cout << "\n";
	
	vector<tuple<int, string, int>> v2;
	v2.push_back(make_tuple(1, "ab", 3));
	v2.push_back(make_tuple(2, "cbg", 7));
	v2.push_back(make_tuple(3, "hgf", 5));
	v2.push_back(make_tuple(4, "xyz", 9));

	for (int i = 0; i < v2.size(); i++) {
		cout << get<0>(v2[i]) << ":" << get<1>(v2[i]) << ":" << get<2>(v2[i]) << "\n";
	}
	cout << "\n";
	return 0;
}


