#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
	unordered_map<int, string> umap;
	unordered_multimap<int, string> ummap;

	umap[4] = "a";
	umap[3] = "b";
	umap[1] = "c";
	umap[2] = "d";
	umap[5] = "e";
	umap[1] = "f";

	for (auto i : umap) {
		cout << i.first << ":" << i.second << " ";
	}
	cout << "\n";

	ummap.insert(make_pair(4, "a"));
	ummap.insert(make_pair(3, "b"));
	ummap.insert(make_pair(1, "c"));
	ummap.insert(make_pair(2, "d"));
	ummap.insert(make_pair(5, "e"));
	ummap.insert(make_pair(1, "f"));

	for (auto i : ummap) {
		cout << i.first << ":" << i.second << " ";
	}
	cout << "\n";
	
	// key가 1인 원소들만 루프
	for (auto it = ummap.lower_bound(1); it != ummap.upper_bound(1); it++) {
		cout << it->first << ":" << it->second << " ";
	}
	cout << "\n";

	return 0;
}