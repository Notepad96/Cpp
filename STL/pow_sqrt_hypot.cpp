#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num = 9;

	cout << "���� : " << num << "\n";
	// powf, powl
	cout << "���� = " << pow(num, 2) << "\n";

	cout << "������ = " << pow(num, 3) << "\n";

	cout << "=======================================\n";

	

	cout << "���� : " << num << "\n";
	// sqrtf, sqrtl
	cout << "������ = " << sqrt(num) << "\n";
	
	cout << "�������� = " << cbrt(num) << "\n";

	cout << "=======================================\n";



	cout << "3�� ���� + 4�� ���� = " << hypot(3, 4) << "\n";

	cout << "=======================================\n";



	pair<int, int> a(1, 1);
	pair<int, int> b(5, 4);

	cout << "��(" << a.first << ", " << a.second << ") �� ";
	cout << "��(" << b.first << ", " << b.second << ")�� �Ÿ� = ";
	
	cout << hypot(b.first - a.first, b.second - a.second) << "\n";

	return 0;
}