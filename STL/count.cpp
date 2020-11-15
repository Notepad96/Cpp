#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
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
    v.push_back(4);
    
    cout << "현재 vector : ";
    for (int i : v) cout << i << " ";
    cout << "\n==============================\n";


    int num = 4;
    cout << "원소 "<< num << "의 개수 : " << count(v.begin(), v.end(), num) << "\n";
    num = 6;
    cout << "원소 " << num << "의 개수 : " << count(v.begin(), v.end(), num) << "\n";
    


    cout << "홀수인 원소의 개수 : " << count_if(v.begin(), v.end(), isOdd) << "\n";
    cout << "==============================\n";

    set<int> set;
    set.insert(4);
    set.insert(4);
    set.insert(4);
    set.insert(7);
    set.insert(5);
    num = 4;
    cout << "원소 " << num << "의 개수 : " << count(set.begin(), set.end(), num) << "\n";
    cout << "홀수인 원소의 개수 : " << count_if(set.begin(), set.end(), isOdd) << "\n";

    return 0;
}