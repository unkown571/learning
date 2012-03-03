/*
 * =====================================================================================
 *
 *       Filename:  multidimensioned_array.cpp
 *
 *    Description:  Multidimensioned arrays in C++. Strictly speaking, there
 *    are no multidimensioned arrays in C++. What is commonly referred to as
 *    a multidimensioned array is actually an array of arrays.
 *
 *        Version:  1.0
 *        Created:  02/10/2012 01:47:32 PM
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

using std::cout;
using std::endl;

int main()
{
	// array of size 3, each element is an array of ints of size 4
	// the nested braces are optional
	int ia[3][4] = { /* 3 elements, each is an array of size 4 */
		{0, 1, 2, 3}, /* initializer for row indexed by 0 */
		{4, 5, 6, 7}, /* initializer for row indexed by 1 */
		{8, 9, 10, 11} /* initializer for row indexed by 2 */
	};

	/* equivalent initialization without the optional nested braces */
	int ia2[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

	// equivalent initialize only element 0 in each row
	int ia3[3][4] = {{0}, {4}, {8}};

	// explicit initialize row 0
	int ia4[3][4] = {0, 3, 6, 9}; // the remaining are initialized 0

	for (size_t i = 0; i != 3; ++i)
		for (size_t j = 0; j != 4; ++j)
			ia4[i][j] = 4 * i + j;

	/*
	 * int *ip[4] // an array of pointers to int
	 * int (*ip)[4] // an pointer to array of 4 ints
	 */
	int (*ip)[4] = ia; // ip points to an array of 4 ints
	ip = &ia[2]; // ia[2] is an array of 4 ints
	
	typedef int int_array[4];
	int_array *pia = ia4;
	for (int_array *p = ia4; p != ia4 + 3; ++p)
	{
		for (int *q = *p; q != *p + 4; ++q)
			cout << std::setw(2) << *q << " ";
		cout << endl;
	}

	return 0;
}
