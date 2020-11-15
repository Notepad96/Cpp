#include <iostream>
#include <bitset>	
#include <string>
using namespace std;

int main() {

	/* bitset ���� */
	// bitset<6> bit;			// 000000
	// bitset<6> bit("110011");	// ���ڿ� "110011"�� �ʱ�ȭ
	// bitset<20> bit2(58);		// 10���� 58�� �ʱ�ȭ
	


	/* ��Ʈ ���� */
	bitset<6> bit("110011");
	//bit[5] = 0;	// bit.reset(5);	// �μ� ���� �� ��ü 0
	//bit[3] = 1;	// bit.set(3, 1);	// �μ� ���� �� ��ü 1
	//bit[1] = !bit[1];	// bit.flip(1);	// �μ� ���� �� ��ü ����
	cout << bit << "\n";


	/* 2���� ���ڿ� 10������ ��ȯ */
	int n = bit.to_ulong();	// type = unsigned long integer
	// int n = bit.to_ullong(); // type = unsigned long long
	cout << bit << "�� 10������ ��ȯ : " << n << "\n";


	/* ��Ʈ �˻� */
	// ��� ��Ʈ�� 1�̸� true, �ϳ��� 0�� �����ϸ� false
	if (bit.all()) cout << "��� 1�̴�\n";
	else cout << "��� 1�� �ƴϴ�\n";
	
	// 1�� �ϳ��� �����ϸ� true, �׷��� ������ false
	if (bit.any()) cout << "0�� �ƴϴ�\n"; 
	else cout << "0�̴�\n";

	// 1�� �ϳ��� �����ϸ� false, �׷��� ������ true
	if (bit.none()) cout << "0�̴�\n";
	else cout << "0�� �ƴϴ�\n";
	



	/* 10���� ���� -> 2���� ���ڿ� */
	int num = 62;
	bitset<20> bit2(num);
	string s = bit2.to_string();
	if (bit.any()) {		
		s = s.substr(s.find('1'));
	}
	else {
		s = "0";
	}
	cout << num << "�� 2������ ��ȯ : " <<  s << "\n";
	

	/* bitset Ž�� */
	cout << bit2 << "\n";
	cout << "��Ʈ �� 1�� ���� : " << bit2.count() << "\n";	// ��Ʈ 1�� ����
	for (int i = 0; i < bit2.size(); i++) {	// bitset ��ü ����
		cout << bit2[i] << " ";	// �ڿ������� �����Ѵ�.
	}
	cout << "\n";


	return 0;
}
