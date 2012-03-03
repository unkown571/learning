/*
 * Test if new expression initialize the array elements of built-in type.
 */
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int *p = new int[19]; // unitialized, by c++ primer page163
	for (int ix = 0; ix != 19; ++ix)
		cout << *(p+ix) << " ";
	cout << endl;

	return 0;
}
