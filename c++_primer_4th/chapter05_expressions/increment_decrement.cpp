/*
 * =====================================================================================
 *
 *       Filename:  increment_decrement.cpp
 *
 *    Description:  increment and decrement operators
 *
 *        Version:  1.0
 *        Created:  02/11/2012 08:36:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	/*
	 * The increment (++) and decrement (--) operators provide a
	 * conventional notational shorthand for adding or substracting 1
	 * from an object.
	 *
	 * There are two forms of these operators: prefix and postfix.
	 *
	 * The prefix version returns the incremented or decremented
	 * value, it returns the object itself as an lvalue.
	 *
	 * The post version returns an rvalue.
	 */
	int i = 0, j;
	j = ++i; // j = 1, i = 1: prefix yields incremented value
	j = i++; // j = 1, i = 2: postfix yields unincrementd value

	vector<int> ivec;
	int cnt = 10;
	while (cnt > 0)
		ivec.push_back(cnt--);
	vector<int>::iterator iter = ivec.begin();
	while (iter != ivec.end())
		cout << *iter++ << endl; //precedence: postfix > *
	// *iter++ equivalent to *(iter++)

	return 0;
}
