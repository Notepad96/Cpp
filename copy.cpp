#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = { 10, 20, 30, 40, 50 };
    for (int i : v) cout << i << " ";
    cout << "\n=============================\n";

    // vector<int> v2;  // error 발생
    vector<int> v2(10,0);
    
    copy(v.begin(), v.end(), v2.begin()+5);
    //copy_n(v.begin(), 5, v2.begin() + 5);
    copy_if(v.begin(), v.end(), v2.begin(), [](int i) {return i > 30; });
    
    // v2.assign(v.begin(),v.end()); // 10 20 30 40 50 새로 초기화

    for (int i : v2) cout << i << " ";
    cout << "\n=============================\n";
    

    v2.insert(v2.end(), v.begin(), v.end());
    for (int i : v2) cout << i << " ";
    cout << "\n=============================\n";

    return 0;
}