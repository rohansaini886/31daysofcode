// CPP program to illustrate
// Implementation of push() function

#include <iostream>
#include <stack>
using namespace std;

int main()
{
	// Empty stack
	stack<int> mystack;
	mystack.push(0);
	mystack.push(1);
	mystack.push(2);

	// Printing content of stack
	while (!mystack.empty()) {
		cout << ' ' << mystack.top();
		mystack.pop();
	}
}
