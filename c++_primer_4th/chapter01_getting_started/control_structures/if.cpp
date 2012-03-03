/*
 * =====================================================================================
 *
 *       Filename:  if.cpp
 *
 *    Description:  if
 *
 *        Version:  1.0
 *        Created:  02/06/2012 07:09:21 PM
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
	std::cout << "Enter two numbers:" << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;  // read input
	// use smaller number as lower bound for summation
	// and larger number as upper bound
	int lower, upper;
	if (v1 <= v2) {
		lower = v1;
		upper = v2;
	} else {
		lower = v2;
		upper = v1;
	}
	int sum = 0;
	// sum values from lower up to upper inclusive
	for (int val = lower; val <= upper; ++val)
		sum += val; // sum = sum + val

	std::cout << "Sum of " << lower
		<< " to " << upper
		<< " inclusive is "
		<< sum << std::endl;
	return 0;
}
