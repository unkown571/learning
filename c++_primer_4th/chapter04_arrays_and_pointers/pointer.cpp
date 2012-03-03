/*
 * =====================================================================================
 *
 *       Filename:  pointer.cpp
 *
 *    Description:  pointer in c++
 *
 *        Version:  1.0
 *        Created:  02/09/2012 06:58:46 PM
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
using std::cin;
using std::endl;
using std::string;

int main()
{
	/*
	 * Pointers are iterators for arrays: a pointer can point to an
	 * element in an array. We can also traverse an array by using
	 * either a subscript or a pointer.
	 *
	 * The dereference and increment operators, when applied to a
	 * pointer that points to an array element, have similiar behaviour
	 * as when applied an iterator.
	 */
	// two style of pointer declaration
	string* ps; // legal but can be misleading
	string* ps1, ps2; // ps1 is a pointer string, ps2 is a string
	string* ps3, ps4; // both ps3 and ps4 are pointers to string
	// this style emphasizes that the object is a pointer
	string *ps5, *ps6;

	/*
	 * A zero-valued pointer points to no object.
	 * An uninitialized pointer is dangerous, what happens when use an
	 * uninitialized pointer is undefined.
	 *
	 * If you must define a pointer seperately from pointing it at an 
	 * object, then initialize the pointer to zero. The reason is that
	 * a zero-valued pointer can be tested and the program can detect
	 * that pointer does not point to an object.
	 */
	// cstdlib #defines NULL to 0
	int *pi = NULL; // ok: equivalent to int *pi = 0;

	// pointer can be initialized or assigned with a pointer from an
	// address or another pointer of the same type.
	double dval = 3.14159;
	double *pd = &dval; // ok: initializer is an address of a double
	double *pd2 = pd; // ok: initializer is a pointer to double
	//int *pi = pd; // error: types of pi and pd differ
	//pi = &dval; // error: attempt to assign an address of a double to int*

	/*
	 * void* is a special pointer which can hold an address of any object.
	 * limited number of operation:
	 * 	compare it to another pointer
	 * 	pass it to a function
	 * 	return it from a function
	 * 	assign it to another void* pointer
	 */
	double obj = 3.14;
	double *pd3 = &obj;
	void *pv = &obj; // ok: obj can be an object of any type
	pv = pd3; // ok: pd3 can be a pointer of any type

	/*
	 * Operations on pointers:
	 * 	dereference: *p to get an lvalue, we can write to *p
	 * 	we can also write to p itself to change its value
	 */
	string s("hello world");
	string *sp = &s; // sp holds the address of s
	cout << *sp << endl; // prints hello world
	*sp = "goodbye"; // *sp is an lvalue, contents of s now changed
	string s2 = "some value";
	sp = &s2; // ok: we can assign a new address to sp to change itself

	/*
	 * Differences between Pointers and References:
	 * 1. A reference always refers to an object: it is an error to define
	 * a reference without initializing it.
	 *
	 * 2. Assigning to a reference changes the object to which the reference
	 * is bound, while assigning to a pointer changes the pointer itself.
	 *
	 * 3. A reference can not be rebound to another object, while pointers
	 * can be changed to point to another object.
	 *
	 * 4. there are no references to reference, but there are 
	 * pointers to pointers.
	 */
	int ival  = 1024, ival2 = 2048;
	int *pint = &ival, *pint2 = &ival2;
	pint = pint2; // pint now points to ival2, ival is unchanged
	int &ri = ival, &ri2 = ival2;
	ri = ri2; // ri still binds ival, but value of ival is changed to ival2
	int **ppi = &pint; // ppi points to a pointer to int
	cout << "The value of ival\n"
		<< "direct value: " << ival << "\n"
		<< "indirect value: " << *pint << "\n"
		<< "doubly indirect value: " << **ppi << endl;

	// using pointers to access array elements
	int ia[] = {0, 2, 4, 6, 8};
	int *ip = ia; // ip points to ia[0]
	int *ip2 = &ia[4]; // ip2 points to ia[4]
	ip2 = ip + 4; // ip2 points to ia[4]
	//substract two pointers, ptrdiff_t is type defined in cstddef header
	ptrdiff_t n = ip2 - ip; // ok: distance between the pointers
	int last = *(ia + 4); // ok: initializes last to 8, the value of ia[4]
	last = *ia + 4; // ok: last = 4, equivalent to ia[0] + 4
	int i = ia[0];
	pint = &ia[2]; // pint points to ia[2]
	int j = pint[1]; // j = *(p+1) = ia[3] = 6
	int k = pint[-2]; // k = *(p-2) = ia[2-2] = ia[0] = 0

	// use points as iterators for array
	const size_t arr_sz = 5;
	int int_arr[arr_sz] = {0, 1, 2, 3, 4};
	for (int *pbeg = int_arr, *pend = int_arr + arr_sz;
			pbeg != pend; ++ pbeg)
		cout << *pbeg << ' ';
	cout << endl;

	/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	 * Pointers to const object, it is different from that in C.
	 */
	// cptr may point to a double that is const, it is also possible
	// that cptr point to a double that is NOT const, however, it is
	// illegal to use cptr to change the underlying object, no matter
	// whether that object is const or not!
	const double *cptr; // cptr may point to a double that is const

	const int universe = 42;
	const void *cpv = &universe; // ok: cpv is pointer to const

	/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	 * The following statement will get an error in C++, but only a
	 * warning in C, you can use a pointer to nonconst to point to
	 * a const object in C, you can even change the value of that
	 * const obejct through this nonconst pointer in C, howeverr, all
	 * these operations in C++ are illegal!
	 */
	//void *pv2 = &universe; //error in C++, waring in C
	//*pv2 = 100; // error in C++, legal in  C!!!
	
	/*
	 * In C++, you cannot use pointer to const to change the underlying
	 * object, even the pointer addresses a nonconst object. However,
	 * if the pointer really addresses a nonconst object, it is possible
	 * to change that object through other method, except through this
	 * pointer.
	 */
	dval = 3.14159;
	cptr = &dval; // Note: cptr is pointer to const, 
                     // need not to be initialized when defined !
	//*cptr = 3.143; // error: cptr is pointer to const, can't change object
	
	/*
	 * const pointers, must be initialized when defined, and 
	 * it is illegal to change the value of the pointer itself, but
	 * we may change the value it points to.
	 */
	int errNumb = 0;
	int *const curErr = &errNumb; // curErr is a constant pointer
	/*
	 * const pointer to const object
	 * neither the value of the object nor the value of the pointer
	 * can be changed.
	 */
	const double PI = 3.1415926;
	const double *pi_PI = &PI;

	/*
	 * Pointers and Typedefs!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	 */
	typedef string *pstring;
	// Note: cstr is const, not  const string *cstr !!!
	// typedef is NOT a textual expansion!
	// const modifies the type of pstring, which is a pointer,
	// therefor this definition declares cstr to be a const pointer
	// to string.
	const pstring cstr = &s2; // equivalent to string *const cstr
	// equivalent to pstring const cstr -> string *const cstr

	// s1 and s2 have the same type
	const string s5;
	string const s6;

	return 0;
}
