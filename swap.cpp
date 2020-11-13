#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a = 10, b = 1000;
    cout << "a = " <<  a << ", b = " << b << "\n";
    swap(a, b);
    cout << "a = " << a << ", b = " << b << "\n";
    
    cout << "\n=============================\n";
    vector<int> v = { 10, 20, 30, 40, 50 };
    cout << "vector1 : ";
    for (int i : v) cout << i << " ";
    
    vector<int> v2(5,0);
    cout << "\nvector2 : ";
    for (int i : v2) cout << i << " ";
    cout << "\n=============================\n";
    
    swap_ranges(v.begin(), v.begin() + 3, v2.begin());

    cout << "vector1 : ";
    for (int i : v) cout << i << " ";

    cout << "\nvector2 : ";
    for (int i : v2) cout << i << " ";
    cout << "\n=============================\n";

    return 0;
}