#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool isOdd(int n) {
    return n % 2 == 1;
}

int main() {
    vector<int> v;
    v.push_back(46);
    v.push_back(67);
    v.push_back(184);
    v.push_back(4);
    v.push_back(17);
    v.push_back(53);
    
    cout << "현재 vector : ";
    for (int i : v) cout << i << " ";
    cout << "\n==============================\n";


    int num = 4;
    auto it = find(v.begin(), v.end(), num);
    if (it == v.end()) {
        cout << num << "은 찾을 수 없습니다.\n";
    }
    else {
        cout << num << "는 존재하며 인덱스는 " << it - v.begin() << " 입니다.\n";
    }
    cout << "\n==============================\n";


    cout << "홀수(Odd)들 \n";
    auto it2 = find_if(v.begin() , v.end(), isOdd);
    while (it2 != v.end()) {
        cout << *it2 << "\n";
        it2 = find_if(it2+1, v.end(), isOdd);
    }

    return 0;
}