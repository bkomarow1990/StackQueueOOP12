#include <iostream>
#include <stack>
#include <ctime>
using namespace std;
int main() {
	stack<int>st;
	int qty = 10;
	srand(unsigned(time(NULL)));
	for (size_t i = 0; i < qty; i++)
	{
		int number = rand() % 100;
		cout << "Push " << number << endl;
		st.push(number);
	}
	cout << "Size: " << st.size() << endl;
	cout << "Empty: " << st.empty() << endl;
	cout << "Top: " << st.top() << endl;
	return 0;
}