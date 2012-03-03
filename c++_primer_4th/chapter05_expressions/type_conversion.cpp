/*
 * =====================================================================================
 *
 *       Filename:  type_conversion.cpp
 *
 *    Description:  type conversion in c++
 *
 *        Version:  1.0
 *        Created:  02/11/2012 02:34:28 PM
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
	 * When Implicit Type Conversions Occur
	 *
	 * 1. in expressions with operands of mixed types, the types are
	 * converted to a common type.
	 * 2. an expression used as a condition is converted to bool. conditions
	 * occur as the first operand of the conditional (?:) operator, and as
	 * the operandss to the logical NOT (!), logical AND (&&), and logical
	 * OR (||) operators, and also appear in the if, while, do while 
	 * statements.
	 * 3. an expression used to initialize or assign to a variable is
	 * converted to the type of the variable.
	 * 4. in most cases, an array is converted to a pointer to the first
	 * element; exceptions: 1) as the operand of the address-of (&) operator
	 * or sizeof, 2)when using the array to initialize a reference to the
	 * array.
	 * 5. a pointer to any data type can be converted to a void*, and a
	 * constant integral value of 0 can be converted to any pointer type.
	 * 6. Objects of enumeration type or enumerators can be automatically
	 * converted to integral type (at least int, or if the largest 
	 * enumerator does not fit in int, then to the smallest type larger than
	 * int, such as unsigned int, long or unsigned long.
	 * 7. a nonconst object can be converted to a const object, which
	 * happens when use a nonconst object to initialize a reference to const
	 * object. We can also converte the address of a nonconst object ( or a
	 * nonconst pointer) to a pointer to the related const type.
	 */
	int ival = 0;
	ival = 3.14 + 3;
	double dval;
	ival >= dval; // ival converted to double
	if (ival) // ival converted to bool
	while (cin >> ival) // cin (istream) converted to bool
	int ival2 = 3.14; // initialize int with double literal 3.14
	int *ip;
	ip = 0; // the int literal 0 converted to a null pointer of type int*
	3.14159L + 'a'; // promote 'a' to int, then convert to long double
	dval + ival; // ival converted to double
	dval + flag; // bool flag converted to double
	ival = dval; // dval converted to int, truncate
	flag = dval; // dvale converted to bool, dval 0 -> false;otherwise, true
	cval + fval; // cval promoted to int, then int converted to float
	sval + cval; // sval and cval promoted to int
	cval + lval; // cval converted to long
	ival + ulval; // ival converted to unsigned long
	usval + ival; // promotion depends on the size of unsigned short and int
	uival + lval; // promotion depends on the size of unsigned int and long

	int ia[10];
	*ip = ia; // convert ia to pointer to first element

	char *cp;
	while (*cp); // char '\0' converted to bool false, others true

	bool b = true;
	ival = b; // ival = 1
	double pi = 3.14;
	bool b2 = pi; // pi from double to bool, true
	pi = false; // false from bool to double 0

	enum Points { point2d = 2, point2w, point3d = 3, point3w};
	Points pt2w = point2w;
	const size_t array_size = 100;
	int chuck_size = array_size * pt2w;
	int array_3d = array_size * point3d;

	/*
	 * Explicit Conversions:
	 * static_cast: A type conversion that the compiler performs implicitly
	 * can be explicitly requested by using static_cast
	 * const_cast: cast off the constness
	 * dynamic_cast: run-time identification of objects addressed either by a pointer or a reference.
	 * reinterpret_cast: a low-level reinterpretation of the bit pattern of its operand.
	 */
	double d = 97.0;
	// cast specified to indicate that the conversion is intentional
	char ch = static_cast<char>(d);
	void *p = &d;
	double *dp = static_cast<double *>(p);

	int *ip;
	char *pc = reinterpret_cast<char *>(ip);
	string str(pc);

	return 0;
}
