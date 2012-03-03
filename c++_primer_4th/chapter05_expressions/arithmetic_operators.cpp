/*
 * =====================================================================================
 *
 *       Filename:  arithmetic_operators.cpp
 *
 *    Description:  arithmetic operators in c++
 *
 *        Version:  1.0
 *        Created:  02/10/2012 02:15:18 PM
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
	 * Arithmetic operators ordered by precedence.
	 *
	 * operator	function	usage
	 * +		unary plus	+ expr
	 * -		unary minus	- expr
	 * *		multiplication	expr * expr
	 * /		division	expr / expr
	 * %		remainder	expr % expr
	 * +		addition	expr + expr
	 * -		substraction	expr - expr
	 *
	 * These operators are all left associative, meaning that they group
	 * left to right when the precedence levels are the same.
	 */
	int a = 5 + 10 * 20 / 2;
	int i = 1024;
	int k = -1; // negates the value of its operand

	int ival1 = 21 / 6; // 3, integral result by truncating the remainder
	int ival2 = 21 / 7; // 3, no remainder, result is an integral value

	/*
	 * The % operator can only be applied to operand of integral types:
	 * bool, char, short, long, and their associated unsigned types.
	 */
	int ival = 42;
	double dval = 3.14;
	ival % 12; // ok: returns 6
	//ival % dval; // error: floating point operand
	21 % 6; // ok: 3
	21 % 7; // ok: 0
	-21 % -8; // ok: -5
	int r = 21 % 5; // machine-dependent: 1 or -4
	cout << "result of 21 % -5 is machine-dependent: " << r << endl;

	21 / 6; // ok: 3
	21 / 7; // ok: 3
	-21 / -8; // ok: -5
	r = 21 / -5; // machine-dependent: -4 or -5
	cout << "result of 21 / -5 is machine-dependent: " << r << endl;


	return 0;
}
