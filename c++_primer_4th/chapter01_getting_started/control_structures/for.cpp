/*
 * =====================================================================================
 *
 *       Filename:  for.cpp
 *
 *    Description:  for 
 *
 *        Version:  1.0
 *        Created:  02/06/2012 03:04:09 PM
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
	int sum = 0;
	// keep executing the while until val is greater than 10
	for (int val = 1; val <= 10; ++val)
		sum += val;	// assign sum + val to sum

	std::cout << "Sum of 1 to 10 inclusive is "
		<< sum << std::endl;
	return 0;
}
