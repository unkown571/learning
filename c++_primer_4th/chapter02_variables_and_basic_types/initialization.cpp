/*
 * =====================================================================================
 *
 *       Filename:  initialization.cpp
 *
 *    Description:  variable initialization in c++
 *
 *        Version:  1.0
 *        Created:  02/08/2012 05:31:47 PM
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

// Variable of built-in type defined outside any function body
// are automatically initialized to zero.
int global_var;

int main()
{
	// A definition specifies a variable's type and identifier.
	// A definition may also provide an initial value for the object.
	// An object defined with a specified first value is spoken of as
	// initialized.
	//
	// C++ supports two form of variable initialization:
	// 	1) copy-initialization		: use equal (=) symbol
	// 	2) direct-initialization	: use parentheses ()
	// int ival(1024); // direct-initialization
	// int ival = 1023; // copy-initialization
	//
	// Initialization is NOT assignment! 
	// Initialization happens when a variable is created and gives that 
	// variable its initial value.
	// Assignment involves obliterating an object's current value and
	// replacing that value with a new one.
	
	int demo_direct_initialization(1024);
	int demo_copy_initialization = 1024;

	// multiple initializer
	std::string titleA = "C++ Primer, 4th Ed.";
	std::string titleB("C++ Primer, 4th Ed.");
	
	// it is possible to initialize a subsequent variable to the value 
	// of the value of one defined earlier in the same definition
	double salary = 9999.99,
	       wage(salary + 0.01);

	// mix of initialized and uninitialize
	int interval, month = 8, day = 7, year = 1955;

	// both forms of initialization syntax used
	std::string title("C++ Primer, 4th Ed."),
		publiser = "A-W";
	double price = 109.99, discount = 0.16;
	double sale_price = apply_discount(price, discount);

	// variables of built-in type defined inside function body
	// are uninitialized.
	float local_var;

	// variables of class types that provide default constructor
	// are initialized by the default constructor
	std::string empty; // empty is the empty string, empty=""

	// some class types do not have a default constructor, every
	// definition must provide expicit initializers.
	
	// declaration and definition
	// In C++ a variable must be defined exactly once and must be
	// defined or declared before it is used.
	extern int i; // declares but does not define i
	int j; // declares and defines j
	// if an initializer is present, the declaration is treated as 
	// a definition even if the declaration labeled extern, because
	// only if it is a defition can it have storage to initialize.
	extern double pi = 3.1416; // definition
	
	// Any variable that is used in more than one file requires
	// declarations that are seperate from the variable's definition.
	// In such cases, one file will contain the definition for the
	// variable and other files that use the same variable will contain
	// declarations for but not a defition of that same variable.
	return 0;
}
