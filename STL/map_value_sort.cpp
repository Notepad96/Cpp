#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
typedef pair<int, int> ii;

int main() {
    map<int, int> map;
    
    map[5] = 20;
    map[2] = 50;
    map[3] = 10;
    map[4] = 40;
    map[1] = 30;
    map[6] = 60;

    for (auto it : map) {
        cout << it.first << ":" << it.second << " ";
    }
    cout << "\n==============================\n";

    vector<ii> v(map.begin(), map.end());
    for(ii it : v) cout << it.first << ":" << it.second << " ";
    cout << "\n==============================\n";

    sort(v.begin(), v.end(), [](ii a, ii b) {
        return a.second > b.second; 
        });

    for (ii it : v) cout << it.first << ":" << it.second << " ";
    cout << "\n==============================\n";

    return 0;
}