/*
 * =====================================================================================
 *
 *       Filename:  sales_addition.cpp
 *
 *    Description:  add Sales_item objects
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
	std::cin >> item1 >> item2;  // read a pair of transactions
	std::cout << item1 + item2 << std::endl; // print their sum
	return 0;
}
