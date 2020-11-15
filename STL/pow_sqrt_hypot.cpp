#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num = 9;

	cout << "¼ıÀÚ : " << num << "\n";
	// powf, powl
	cout << "Á¦°ö = " << pow(num, 2) << "\n";

	cout << "¼¼Á¦°ö = " << pow(num, 3) << "\n";

	cout << "=======================================\n";

	

	cout << "¼ıÀÚ : " << num << "\n";
	// sqrtf, sqrtl
	cout << "Á¦°ö±Ù = " << sqrt(num) << "\n";
	
	cout << "¼¼Á¦°ö±Ù = " << cbrt(num) << "\n";

	cout << "=======================================\n";



	cout << "3ÀÇ Á¦°ö + 4ÀÇ Á¦°ö = " << hypot(3, 4) << "\n";

	cout << "=======================================\n";



	pair<int, int> a(1, 1);
	pair<int, int> b(5, 4);

	cout << "Á¡(" << a.first << ", " << a.second << ") ¿Í ";
	cout << "Á¡(" << b.first << ", " << b.second << ")ÀÇ °Å¸® = ";
	
	cout << hypot(b.first - a.first, b.second - a.second) << "\n";

	return 0;
}