/*
 * =====================================================================================
 *
 *       Filename:  comma_operator.cpp
 *
 *    Description:  comma operator
 *
 *        Version:  1.0
 *        Created:  02/11/2012 09:51:47 AM
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
	 * A comma expression is a series of expressions seperated by commas.
	 * The expressions are evaluated from left to right, the result of
	 * a comma expression is the value of the rightmost expression.
	 * The result is an lvalue if the rightmost operand is an lvalue.
	 */
	const char *cp = "C++";
	const size_t arr_sz = 10;
	char buffer[arr_sz];
	for (char *p = buffer, const char *q = cp; *p++ = *q++;)
		;
}

