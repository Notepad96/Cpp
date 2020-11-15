#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(46);
    v.push_back(68);
    v.push_back(184);
    v.push_back(4);
    v.push_back(17);
    v.push_back(53);
    
    cout << "현재 vector : ";
    for (int i : v) cout << i << " ";
    cout << "\n==============================\n";

    int max = *max_element(v.begin(), v.end());
    cout << "가장 큰 수 : " << max << "\n";
    
    int max_index = max_element(v.begin(), v.end()) - v.begin();
    cout << "가장 큰 수의 인덱스 : " << max_index;
    cout << "\n==============================\n";


    int min = *min_element(v.begin(), v.end());
    cout << "가장 작은 수 : " << min << "\n";

    int min_index = min_element(v.begin(), v.end()) - v.begin();
    cout << "가장 작은 수의 인덱스 : " << min_index << "\n\n";

    return 0;
}