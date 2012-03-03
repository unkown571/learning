/*
 * =====================================================================================
 *
 *       Filename:  io_operator.cpp
 *
 *    Description:  io operator in c++
 *
 *        Version:  1.0
 *        Created:  02/11/2012 08:25:43 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	/*
	 * IO operators ( <<, >>)
	 *
	 * When we use an overloaded operator, it has the same precedence
	 * and associativity as is defined for the built-in version of the
	 * operator.
	 *
	 * Like the other binary operators, the shift operators are left
	 * associative.
	 *
	 * The shift operators have midlevel precedence: lower precedence than
	 * the arithmetic operators but higher than the relational, assignment
	 * or conditional operators.
	 */
	cout << 42 + 10 << endl; /* + has higher precedence than << */
	cout << (42 > 10) << endl; /* > < has lower precedence than << */
	//cout << 42 > 10; /* error: attempt to compare cout to 10 */
	//the above is equivalent to (cout << 42) > 10
	
	return 0;
}
