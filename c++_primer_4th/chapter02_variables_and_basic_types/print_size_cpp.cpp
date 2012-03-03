/*
 * =====================================================================================
 *
 *       Filename:  print_size.cpp
 *
 *    Description:  print sizeof
 *
 *        Version:  1.0
 *        Created:  02/07/2012 04:28:16 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>
#include <iomanip>
#define PRINT_SIZE(type)                               \
	do {                                           \
		std::cout << std::setw(14) << #type << '\t' \
		<< sizeof(type) << std::endl;          \
	} while (0)

// The size of the arithmetic types varies across machines.
// The standard guarantees a minimum size for each of the 
// arithmetic types, but it does not prevent compilers using
// larger sizes.
//
// The integral types(short,int,long,char,wchar_t,bool), except the
// boolean type, may be either signed or unsigned, int, short and long
// are all signed by default. The char type is represented using either
// signed char or unsigned char version, varying by complier.
//
// When an out-of-range value is assigned to unsigned types, the compiler
// will take the remainder of the modulo the number of distinct values the
// unsigned target type can hold. This is guaranteed by the standard.
//
// When an out-of-range value is assigned to signed types, undefined behaviour.
// Many compilers also take the remainder as that do to unsigned types. But, 
// this is not guaranteed.
//
// The float type is usually not precise enough for real programs. float is
// guaranteed to offer only 6 significant digits.
// The double type guarantees at least 10 significant digits, which is 
// sufficient for most calculations.
int main()
{
	// Actual Size		Standard Requirement
	PRINT_SIZE(bool);	// NA
	PRINT_SIZE(char);	// 8 bits
	PRINT_SIZE(unsigned char);// 8 bits
	PRINT_SIZE(short);	// 16 bits
	PRINT_SIZE(unsigned short);// 16 bits
	PRINT_SIZE(int);	// 16 bits
	PRINT_SIZE(unsigned);	// 
	PRINT_SIZE(wchar_t);	// 16 bits
	PRINT_SIZE(long);	// 32 bits
	PRINT_SIZE(unsigned long);// 32 bits
	PRINT_SIZE(float);	// 6 significant digits
	PRINT_SIZE(double);	// 10 significant digits
	PRINT_SIZE(long double);// 10 significant digits
	PRINT_SIZE(int *);
	return 0;
}
