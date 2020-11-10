#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(2);
    v.push_back(5);

    vector<int> v2 = { 5, 5, 2, 3, 4, 7, 6};
   
    cout << "vector1 : ";
    for (int i : v) cout << i << " ";
    cout << "\n";

    cout << "vector2 : ";
    for (int i : v2) cout << i << " ";
    cout << "\n";

    if (is_permutation(v.begin(), v.end(), v2.begin())) {
        cout << "동일한 원소들을 가졌습니다.\n";
    }
    else {
        cout << "동일하지 않는 원소들을 가졌습니다.\n\n";
    }

    return 0;
}