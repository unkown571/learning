/*
 * =====================================================================================
 *
 *       Filename:  while.cpp
 *
 *    Description:  while
 *
 *        Version:  1.0
 *        Created:  02/06/2012 02:49:00 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>
int main()
{
	int sum = 0, val = 1;
	// keep executing the while until val is greater than 10
	while (val <= 10) {
		sum += val;	// assign sum + val to sum
		++val;		// add 1 to val
	}
	std::cout << "Sum of 1 to 10 inclusive is "
		<< sum << std::endl;
	return 0;
}
