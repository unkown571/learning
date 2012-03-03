/*
 * =====================================================================================
 *
 *       Filename:  sales_addition2.cpp
 *
 *    Description:  add Sales_item objects with checking ISBN
 *
 *        Version:  1.0
 *        Created:  02/06/2012 07:52:06 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */

#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	// first check that item1 and item2 represent the same book
	if (item1.same_isbn(item2)) {
		std::cout << item1 + item2 << std::endl;
		return 0;  // indicates success
	} else {
		std::cerr << "Data must refer to same ISBN"
			<< std::endl;
		return -1; // indicates failure
	}
}
