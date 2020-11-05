#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> stack;

	if (stack.empty()) {
		cout << "������ ������ϴ�.\n";
	}

	/* ����, ���� */
	stack.push(5);	// 5
	stack.push(4);	// 5 4
	stack.push(2);	// 5 4 2
	stack.push(1);	// 5 4 2 1
	stack.push(3);	// 5 4 2 1 3
	stack.pop();	// 5 4 2 1

	cout << "������ : " << stack.size() << "\n";

	while (!stack.empty()) {
		cout << stack.top() << " ";
		stack.pop();
	}
	cout << "\n";

	return 0;
}