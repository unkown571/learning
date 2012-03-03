/*
 * =====================================================================================
 *
 *       Filename:  new_delete.cpp
 *
 *    Description:  C programs use pair of functions named malloc and free
 *    to allocate space from the free store. In C++, we use new and delete
 *    expressions.
 *
 *        Version:  1.0
 *        Created:  02/10/2012 10:52:04 AM
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

using std::string;
using std::cout;
using std::endl;

inline void print_int_array(const int *pa, size_t size)
{
	for (size_t ix = 0; ix != size; ++ix)
		cout << *(pa + ix) << " ";
	cout << endl;
}

size_t get_size()
{
	return 0;
}

int main()
{
	/*
	 * When we dynamically allocate an array, we specify the type and 
	 * optionally size but do not name the object. 
	 *
	 * The new expression returns a pointer to the first element in the 
	 * newly allocated array.
	 *
	 * When the object is class type, then the type's default constructor
	 * is used to initialize each element, when the object is built-in
	 * type, then the elements are uninitialized.
	 *
	 * We can value-initialize the elements by following the array size
	 * by an empty pair of parentheses. Then if the elements are buit-in
	 * type, they will be initialized 0, if the elements are class type,
	 * they will be initialized by the default constructor.
	 */
	int *pia = new int[100]; // array of 10 uninitialized ints
	for (size_t ix = 0; ix != 100; ++ix)
		cout << *(pia + ix) << " ";
	cout << endl;
	print_int_array(pia, 100);
	string *psa = new string[10]; // 10 empty string, default constructor
	int *pia2 = new int[10](); // va
	print_int_array(pia, 10);

	/*
	 * When creating dynamically an array of const built-in objects, we
	 * must initialize that array using the value-initialize method.
	 * When a class type provides default construct, it is also possible
	 * to creating dynamically an array of const objects of that class type.
	 */
	// error: const array must be initialized
	//const int *pci_bad = new const int[100];
	//ok: value-initialized const array
	const int *pci_ok = new const int[100]();
	// ok: array of 100 empty strings
	const string *pcs = new const string[100];

	/*
	 * It is legal to dynamically allocate an empty array.
	 * Therefore, the following code will work fine even if get_size()
	 * return 0 to n.
	 */
	size_t n = get_size(); // get_size returns number of elements needed
	int *p = new int[n];
	for (int *q = p; q != p + n; ++q)
		cout << *q << " ";
	cout << endl;

	//char arr[0]; /* error: cannot define zero-length array */
	char *cp = new char[0]; /* ok: but cp can not be dereferenced, it points to no object */

	// if [] is omitted, too little memory will be freed and lead to 
	// memory leak
	delete [] pia;
	delete [] cp;

	return 0;
}
