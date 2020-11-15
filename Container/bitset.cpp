#include <iostream>
#include <bitset>	
#include <string>
using namespace std;

int main() {

	/* bitset 생성 */
	// bitset<6> bit;			// 000000
	// bitset<6> bit("110011");	// 문자열 "110011"로 초기화
	// bitset<20> bit2(58);		// 10진수 58로 초기화
	


	/* 비트 수정 */
	bitset<6> bit("110011");
	//bit[5] = 0;	// bit.reset(5);	// 인수 생략 시 전체 0
	//bit[3] = 1;	// bit.set(3, 1);	// 인수 생략 시 전체 1
	//bit[1] = !bit[1];	// bit.flip(1);	// 인수 생략 시 전체 반전
	cout << bit << "\n";


	/* 2진수 문자열 10진수로 변환 */
	int n = bit.to_ulong();	// type = unsigned long integer
	// int n = bit.to_ullong(); // type = unsigned long long
	cout << bit << "를 10진수로 변환 : " << n << "\n";


	/* 비트 검사 */
	// 모든 비트가 1이면 true, 하나라도 0이 존재하면 false
	if (bit.all()) cout << "모두 1이다\n";
	else cout << "모두 1이 아니다\n";
	
	// 1이 하나라도 존재하면 true, 그렇지 않으면 false
	if (bit.any()) cout << "0이 아니다\n"; 
	else cout << "0이다\n";

	// 1이 하나라도 존재하면 false, 그렇지 않으면 true
	if (bit.none()) cout << "0이다\n";
	else cout << "0이 아니다\n";
	



	/* 10진수 숫자 -> 2진수 문자열 */
	int num = 62;
	bitset<20> bit2(num);
	string s = bit2.to_string();
	if (bit.any()) {		
		s = s.substr(s.find('1'));
	}
	else {
		s = "0";
	}
	cout << num << "를 2진수로 변환 : " <<  s << "\n";
	

	/* bitset 탐색 */
	cout << bit2 << "\n";
	cout << "비트 중 1의 개수 : " << bit2.count() << "\n";	// 비트 1의 개수
	for (int i = 0; i < bit2.size(); i++) {	// bitset 전체 길이
		cout << bit2[i] << " ";	// 뒤에서부터 접근한다.
	}
	cout << "\n";


	return 0;
}
