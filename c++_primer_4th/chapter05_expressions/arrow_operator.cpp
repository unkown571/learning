/*
 * =====================================================================================
 *
 *       Filename:  arrow_operator.cpp
 *
 *    Description:  arrow operator in c++
 *
 *        Version:  1.0
 *        Created:  02/11/2012 09:01:55 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */

#include <iostream>

int main()
{
	/*
	 * The arrow operator (->) provides a synonym for expressions
	 * involving the dot and dereference operators.
	 * ptr->member
	 * (*ptr).member
	 */
	Sales_item *sp = &item1;
	(*sp).same_isbn(item2); // run same_isbn on object to which sp points

	// the dot operator has higher precedence that the dereference operator
	*sp.same_isbn(item2); // error: sp has no member named same_isbn
	// the above is equivalent to *(sp.same_isbn(item2));

	return 0;
}
