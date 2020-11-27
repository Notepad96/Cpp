#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int a = 1234567;

    while (a) {
        cout << a % 10 << " ";
        a /= 10;
    }
    cout << "\n===========================\n";



    a = 1234567;
    string s = to_string(a);
    vector<int> v, v2;
    
    for (char c : s) {
        cout << c << " ";
        v.push_back(c);
    }
    cout << "\n===========================\n";



    cout << "vector1 : ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
        v2.push_back(s[i] - '0');
    }
    cout << "\n===========================\n";
    


    cout << "vector2 : ";
    for (int i : v2) {
        cout << i << " ";
    }
    cout << "\n===========================\n";


    return 0;
}