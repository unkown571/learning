/*
 * =====================================================================================
 *
 *       Filename:  sales_io.cpp
 *
 *    Description:  read and write class Sales_item object
 *
 *        Version:  1.0
 *        Created:  02/06/2012 07:48:54 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */

#include <iostream>
#includde "Sales_item.h"
int main()
{
	Sales_item book;
	// read ISBN, number of copies sold, and sales price
	std::cin >> book;
	// write ISBN, number of copies sold, total revenue, and average price
	std::cout << book << std::endl;
	return 0;
}
