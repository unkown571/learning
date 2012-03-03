/*
 * =====================================================================================
 *
 *       Filename:  array.cpp
 *
 *    Description:  array in c++
 *
 *        Version:  1.0
 *        Created:  02/09/2012 04:19:25 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

int test_local_array()
{
	int ia[5]; // uninitialized
	cout << "inside test_local_array(): "
		<< "ia[3] = " << ia[3]
		<< " ia[4] = " << ia[4] << endl;
	return 0;
}
int main()
{
	/* An array is a compound type consisting of a type specifier,
	 * an identifier, and a dimension. 
	 *
	 * The type specifier denotes  a built-in or class type, as well
	 * as a compound type except reference, there are no arrays of 
	 * references.
	 *
	 * The dimension must be a constant expression whose value is greater
	 * than or equal to one. A nonconst variable or a const variable whose
	 * value is not known until run time, cannot be used to specify the
	 * dimension of an array.
	 */
	const char *passage = "Modern C++ programs should always use vectors"
		" and iterators in preference to the lower-level arrays and"
		" pointers. Arrays have significant drawbacks compared to"
		" vectors: they are fixed size, and they offer no help to the"
		" programer in keeping track of how big a given array is.";
	cout << passage << endl;

	/*
	 * Explicitly initializing array elements with comma-seperated list of
	 * initializers for its elements.
	 */
	const unsigned array_size = 3;
	int ia[array_size] = {0, 1, 2};

	/*
	 * If we don not supply element initializers, then the elements are
	 * initialized in the same way that variables are initialed:
	 * o  elements of built-in type defined outside the body of a function
	 *    are initialized to zero.
	 * o  elements of built-in type that inside the body of a function are
	 *    uninitialized.
	 * o  elements of a class type, regardless of where defined, are
	 *    initialized by the default constructor for that class if it has
	 *    one.
	 *    If the class does not have a default constructor, then the
	 *    elements must be explicitly initialized.
	 */
	int ia2[] = {0, 1, 2}; // an array of dimension 3
	int ia3[25]; // in main(), uninitialized
	cout << "inside main(): "
		<< "ia3[13] = " << ia3[13]
		<< " ia3[14] = " << ia3[14] << endl;
	test_local_array();

	/*
	 * If the dimension size is specified and is greater than the number
	 * of listed elements, the initializers are used for the first elements.
	 * The remaining elements are initialized to zero if the elements are of
	 * built-in type or by running the default constructor if they are of
	 * class type.
	 */
	int ia4[array_size] = {0, 1}; // equivalent to = {0, 1, 0};
	cout << ia4[2] << endl;

	int ia5[array_size * 2] = {}; // equivalent to = {0, 0, 0, 0, 0, 0};
	for (int i = 0; i < array_size * 2; ++i)
		cout << ia5[i];
	cout << endl;

	// equivalent to strarr = {"hi", "bye", ""}
	string strarr[array_size] = {"hi", "bye"}; 

	/*
	 * A character array can be initialized with either a list of
	 * comma-seperated character literals enclose in braces or 
	 * a string listeral. There is a difference between the two form:
	 * a string literal contain a terminating null character.
	 */
	char ca1[] = {'C', '+', '+'}; // no null
	char ca2[] = {'C', '+', '+', '\0'}; // explicit null
	char ca3[] = "C++"; // null terminator added automatically
	
	//const char ch3[6] = "Daniel"; // error: Daniel is 7 elements
	
	/*
	 * There is no array copy or assign: arr2(arr1) or arr2 = arr1
	 */

	/*
	 * When we subscript a vector, we use the vector::size_type type,
	 * when we subscript a array, the right type to use is the size_t type 
	 * which is defined in cstddef header.
	 */
	const size_t sz = 10;
	int ia6[sz]; // 10 elements, all are unitialized
	for (size_t ix = 0; ix != sz; ++ix)
		ia6[ix] = ix;


	return 0;
}
