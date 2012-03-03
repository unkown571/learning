/*
 * =====================================================================================
 *
 *       Filename:  conditional_operator.cpp
 *
 *    Description:  conditional operator in c++
 *
 *        Version:  1.0
 *        Created:  02/11/2012 09:24:35 AM
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
	 * The conditional operator is the only ternary operator in C++.
	 * It allows us to embed simple if-else tests inside an expression.
	 */
	int i  = 10, j = 20, k = 30;
	int maxVal = i > j ? i : j;

	// avoid deep nesting of conditional operator
	int max = i > j
		? i > k ? i : k
		: j > k ? j : k;
	// we should do the equivalent comparison in longer but simpler way
	int max = i;
	if (j > max)
		max = j;
	if (k > max)
		max = k;

	/*
	 * The conditional operator has fairly low precedence. When we embed
	 * a conditional expression in a larger expression, we usually must
	 * parenthesize the conditional subexpression.
	 */
	cout << (i < j ? i : j); // ok: prints larger of i and j
	cout << (i < j) ? i : j; // prints 1 or 0 !
	//cout << i < j ? i : j; // error: compares cout to int

	return 0;
}

