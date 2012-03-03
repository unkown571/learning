/*
 * =====================================================================================
 *
 *       Filename:  literal_constants.cpp
 *
 *    Description:  literal constants in c++
 *
 *        Version:  1.0
 *        Created:  02/07/2012 06:47:50 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>
// Literals exist only for the built-in types, there are no literals of class
// types.
//
// Three notations for literal integer constant: decimal, octal, hexadecimal.
// 	20	/* decimal */
// 	024	/* octal, begin with a leading 0 (zero) */
// 	0x14	/* hexadecimal, begin with either leading 0x or 0X */
//
// By default, the type of a literal integer is either int or long, there are no
// literals of type short. Whether it is int or long is determined by the value
// of the literal, small is int and larger values are long. Adding suffix 
// L or l can force the type of a literal constant to be type long  and 
// u or U for unsigned.
// 	128u /* unsigned */    1024UL /* unsigned long */
// 	1L   /* long */        8Lu    /* unsigned long */
//
// Two notations for floating-point literal constants: decimal or scientific.
// By default, floating-point literals are type double. Adding suffix F or f
// can force it to be float and L or l for extended precision (long double).
// 	3.14159F	.001f	12.345L		0.
// 	3.14159E0f	1E-3F	1.2345E1L	0e0
int main()
{
	// boolean literals
	bool test = false;
	bool test2 = true;
	// printable charater literals, enclosed by single quotation marks
	// 'a' '2' ',' ''
	// wide-charater literals of type wchar_t, preceded by an L
	// L'a'
	// nonprintable charater literals, written using escape sequence
	// '\n' '\t' '\v' '\b' '\r' '\f' '\a' \\ \? \' \"
	// octal generalized escape sequence, any charater can be representd
	// \ooo		less than or equal to three octal digits
	// hexadecimal generalized escape sequence
	// \xddd	one or more hexadecimal digits
	//
	// Charater string literals are arrays of constant charaters.
	// String literal constants are writen as zero or more charaters
	// enclosed in double quotation marks.
	// 	"Hello World!"	""	"\nCC\toptions\tfile.[cC]\n"
	// Wide string literals is preceded by L.
	// 	L"a wide string literal"
	std::cout << "a multi-line "
		"string literal "
		"using concatenation"
		<< std::endl;
	// concatenating plain and wide charater strings is undefined
	std::cout << "multi-line "L"literal" << std::endl;
	// A \ before a newline ignores the line break
	std::cou\
t << "Hi" << st\
d::endl;
	// multiline string literal, backslash must be the last thing
	// and any leading spaces or tabs on the subsequent lines are
	// part of the literal. Therefore, the continuation lines of 
	// long literal do not have the normal indentation.
	std::cout << "a multi-line \
string literal \
using a backslash"
		<< std::endl;

	return 0;
}
