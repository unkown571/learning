/*
 * =====================================================================================
 *
 *       Filename:  relational_and_logical_operators.cpp
 *
 *    Description:  relational and logical operators in c++
 *
 *        Version:  1.0
 *        Created:  02/10/2012 03:19:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
	/*
	 * Relational and logical operators in c++, each yields bool.
	 *
	 * operator	function		usage
	 * !		logical NOT		!expr
	 * <		less than 		expr < expr
	 * <=		less than or equal	expr <= expr
	 * >		greater than		expr > expr
	 * >=		greater than or equal	expr >= expr
	 * ==		equality		expr == expr
	 * !=		inequality		expr != expr
	 * &&		logical AND		expr && expr
	 * ||		logical OR		expr || expr
	 *
	 * the relational and logical take operands of arithmetic or pointer
	 * types and return value of type bool.
	 */

	// Short-Circuit Evaluation of logical AND and OR
	// the logical AND and OR operators always evaluate their left operand
	// before the right. The right operand is evaluated only if the left
	// operand does not determine the result. This evaluation stratege is
	// often referred to as "short-circuit evaluation".
	
	string s("Expressions in C++ are composed..");
	string::iterator it = s.begin();
	//convert first word in s to uppercase
	while (it != s.end() && !isspace(*it)) {
		*it = toupper(*it);
		++it;
	}
	cout << s << endl;

	/*
	 * Because the bool value true can be converted to one, it is
	 * almost never right to write an equality test that tests
	 * against the bool literal true, similar for bool literal false.
	 */
	bool val = 0;
	if (val == false)
		cout << std::boolalpha << val << endl;
	// the following form is shorter and more indirect
	val = true;
	if (val)
		cout << std::boolalpha << val << endl;

	int val2 = 3;
	// the following two forms are quite different when val2 is not bool
	if (val2 == 1) {/*  */}
	if (val2) {/*  */}

	return 0;
}
