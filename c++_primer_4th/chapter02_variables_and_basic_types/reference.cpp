/*
 * =====================================================================================
 *
 *       Filename:  reference.cpp
 *
 *    Description:  reference
 *
 *        Version:  1.0
 *        Created:  02/08/2012 07:11:04 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>
// The difference between const reference and nonconst referece:
// 1. const reference can refer to an rvalue, such as 10 while 
// nonconst reference can NOT.
// 2. const reference can refer to different type, nonconst reference must refer
// to the same data type.
// 3. const reference is read only, while nonconst reference can be written.
// Therefore, const reference can refer to const object as well as nonconst 
// object, while nonconst reference can only refer to nonconst object.
int main()
{
	// A reference is a compound type that is defined by preceding a
	// variable name with by the & symbol. A compound type is a type
	// that is defined in terms of another type.
	// We can NOT define a reference to a reference type, but can
	// make a reference to any other data type.
	
	// A nonconst reference must be initialized using an object of the 
	// SAME type of the reference
	int ival = 1024;
	int &refVal = ival; // ok, refVal refers to ival
	int &refVal2; // error: a reference must be initialize
	int &refVal3 = 10; // error: initializer must be an object

	// When a reference is initialized, it remains bound to that object
	// as long as the reference exists. There is no way to rebind a
	// reference to a different object.
	
	// A reference is just another name for the object to which it is bound,
	// all operations on a reference are actually operations on the
	// underlying object to which the reference is bound.
	refVal += 2; // adds 2 to ival
	int ii = refVal; // assign ii the value currently associated with ival

	// define multiple references
	int i = 1024, i2 = 2048;
	int &r = i, r2 = i2; // r is a reference, r2 is an int
	int i3 = 1024, &ri = i3; // defines one object and one reference
	int &r3 = i3, &r4 = i2; // defines two references

	// A const reference is a reference that MAY refer to a const object
	const int ival = 1024;
	const int &refVal = ival; // ok: both reference and object are const
	int &ref2 = ival; // error: nonconst reference to a const object
	// A const reference can be initialized to an object of a different
	// type or to an rvalue, such as a literal constant:
	int i = 42;
	// legal for const references only
	const int &r = 42;
	const int &r2 = r + i;
	double dval = 3.14;
	const int &rd = dval;

	return 0;
}
