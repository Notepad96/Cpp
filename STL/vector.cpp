#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /* 생성자 */
    vector<int> v;
    //vector<int> v(5); // size = 5만큼 int의 기본값 0으로 초기화
    //vector<int> v(5, 2); // size = 5 만큼 2로 초기화

    // 삽입
    v.push_back(5); // 맨뒤의 삽입
    v.push_back(3);
    v.push_back(1);
    v.insert(v.begin(), 2); // (반복자, 값) : 반복자의 삽입
    // 2 - 5 - 3 - 1
    
    v.insert(v.end(), 5, 2) // 맨 뒤에 size = 5 만큼 2 삽입

    // 삭제
    v.pop_back();   // 맨뒤 삭제
    v.erase(v.begin()); // (반복자) : 반복자의 삭제

    cout << "길이 : " << v.size() << "\n";
    cout << "맨앞 : " << v.front() << " 맨뒤 : " << v.back() << "\n";

    for (int n : v) {
        cout << n << " ";
    }
    cout << "\n";

    // 새로 초기화
    v.assign(5, 4); // size = 5 만큼 4로 초기화
    for (int n : v) {
        cout << n << " ";
    }
    cout << "\n";

    // 비우기
    v.clear();

    return 0;
}