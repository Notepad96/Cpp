#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	unordered_set<int> uset;
	unordered_multiset<int> umset;

	uset.insert(3);	// 3
	uset.insert(5);	// 3 5
	uset.insert(1);	// 3 5 1
	uset.insert(4);	// 3 5 1 4
	uset.insert(2);	// 3 5 1 4 2
	uset.insert(5); // 3 5 1 4 2

	for (int i : uset) {
		cout << i << " ";
	}
	cout << "\n";

	for (auto it = uset.find(5); it != uset.end(); it++) {
		cout << *it << " ";
	}
	cout << "\n";

	umset.insert(5);	// 5
	umset.insert(3);	// 5 3
	umset.insert(1);	// 5 3 1
	umset.insert(4);	// 5 3 1 4
	umset.insert(2);	// 5 3 1 4 2
	umset.insert(5);	// 5 5 3 1 4 2 
	umset.insert(1);	// 5 5 3 1 1 4 2


	for (int i : umset) {
		cout << i << " ";
	}
	cout << "\n";


	return 0;
}
