#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    
    cout << "vector : ";
    for (int n : v) {
        cout << n << " ";
    }
    cout << "\nindex  : ";
    for (int n = 0; n < v.size(); n++) {
        cout << n << " ";
    }
    cout << "\n==========================\n";



    vector<int> v2 = { 5, 7 };
    cout << "{ ";
    for (int n : v2) {
        cout << n << " ";
    }
    cout << "} ";
    auto it = search(v.begin(), v.end(), v2.begin(), v2.end());
    if (it != v.end()) {
        cout << it-v.begin() << "에 위치한다.\n";
    }
    else {
        cout << "는 존재하지 않습니다.\n";
    }
    cout << "\n==========================\n";



    v2 = { 5, 6, 7 };
    cout << "{ ";
    for (int n : v2) {
        cout << n << " ";
    }
    cout << "} ";
    it = search(v.begin(), v.end(), v2.begin(), v2.end());
    if (it != v.end()) {
        cout << it - v.begin() << "에 위치한다.\n";
    }
    else {
        cout << "는 존재하지 않습니다.\n";
    }
    cout << "\n==========================\n";



    int num1 = 3, num2 = 1;
    it = search_n(v.begin(), v.end(), num1, num2);
    cout << "{ ";
    for (int i = 0; i < num1; i++) {
        cout << num2 << " ";
    }
    cout << "} ";
    if (it != v.end()) {
        cout << it - v.begin() << "에 위치한다.\n";
    }
    else {
        cout << "는 존재하지 않습니다.\n";
    }

    return 0;
}