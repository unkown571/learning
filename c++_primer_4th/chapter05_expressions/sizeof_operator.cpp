/*
 * =====================================================================================
 *
 *       Filename:  sizeof_operator.cpp
 *
 *    Description:  sizeof operator in c++
 *
 *        Version:  1.0
 *        Created:  02/11/2012 09:32:41 AM
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
	 * The sizeof opoerator returns a value of type size_t (cstddef header),
	 * that is the size, in bytes, of an object or type name.
	 *
	 * sizeof(type name);
	 * sizeof(expr);
	 * sizeof expr;
	 */
	Sales_item item, *p;
	sizeof(Sales_item); // size required to hold an object of Sales_item
	sizeof item; // size of item's type, that is, sizeof(Sales_item)
	sizeof *p; // size of type to which p points, sizeof(Sales_item)

	// sizeof char or an expression of type char is guaranteed to be 1
	// sizeof a reference is the same size to hold the referenced object
	// sizeof a pointer returns the size needed to hold a pointer
	// sizeof *pointer returns the size of the object ponter points
	// sizeof an array is size of element type times the number of elements
	int ia[] = {1, 2, 3, 4, 5, 6};
	int arr_sz = sizeof(ia)/sizeof(*ia); // sz = 24 / 4 = 6
	arr_sz = sizeof(ia)/sizeof(ia[0]); // sz = 24/4 = 6

	return 0;
}
