#include <iostream>

using std::cout;
using std::endl;

int main()
{
	const size_t array_size = 8;
	int ia[array_size] = {0, 1, 2, 3, 4, 0};
	int *p = ia + 2;

	bool test_multiple_cout = true;

	if (test_multiple_cout) {
		cout << *p++ << " " << *p << endl; // 2, 2
		cout << *++p << " " << *p << endl; // 4, 3
		++*p;
		cout << *p << endl; // 5
	} else {
		cout << *p++ << endl; // 2
		cout << *p << endl; // 3
		cout << *++p << endl; // 4
		cout << *p << endl; // 4
		++*p;
		cout << *p << endl; // 5
	}


	return 0;
}
