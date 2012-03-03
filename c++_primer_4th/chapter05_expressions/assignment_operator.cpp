/*
 * =====================================================================================
 *
 *       Filename:  assignment_operator.cpp
 *
 *    Description:  assignment operator in c++
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
#include <string>

using std::cout;
using std::endl;
using std::string;

size_t get_size()
{
	return 0;
}

int main()
{
	/*
	 * Assignment operators ( = )
	 *
	 * The left-hand operand of an assignment operator must be a nonconst
	 * lvalue.
	 *
	 * The result of the assignment is the left-hand operand, the type of
	 * the result is the type of the left-hand operand.
	 *
	 * The assignment operator is right associative and has low precedence.
	 *
	 * Compound operators:
	 * 	+=  -=  *=  /=  %=  // arithmetic operators
	 * 	<<= >>= &=  ^=  |=  // bitwise operators
	 *
	 * When we use the compound assignment, the left-hand operand is
	 * evaluated only once. If we write the similiar longer version,
	 * that operand is evaluated twice.
	 */
	int ival, jval;
	ival = jval = 10;
	string s1, s2;
	s1 = s2 = "OK";

	while ( (ival = get_size()) != 0)
	{/* because = has lower precedence than !=, the additional 
	    parentheses are necessary for the condition expression.
	*/}

	return 0;
}
