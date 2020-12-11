#include <iostream>
#include "Stack.h"
using namespace std;
int main() {
	Stack<int> stack(2);
	//cout << "top: " << stack.peak() << endl;
	//for (size_t i = 1; i <= 5; i++)
	//{
	//	cout << "try add: " << i << endl;
	//	stack.push(i*10);
	//}
	//cout << "empty: " << boolalpha << stack.empty() << endl;
	///*while (!stack.empty())
	//{
	//	cout << stack.peak() << endl;
	//	stack.pop();
	//}*/
	Stack<int> stack2(10);
	for (size_t i = 1; i <= 10; i++)
	{
		stack2.push(i * 10);
	}
	stack2.print();
	cout << stack2.size() << endl;
	return 0;
}