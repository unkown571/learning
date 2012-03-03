/*
 * =====================================================================================
 *
 *       Filename:  variables.cpp
 *
 *    Description:  variables in c++
 *
 *        Version:  1.0
 *        Created:  02/07/2012 07:28:19 PM
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
	// a first, not very good, solution
	std::cout << "2 raised to the power of 10.";
	std::cout << 2*2*2*2*2*2*2*2*2*2;
	std::cout << std::endl;

	// local objects of type int
	int value = 2;
	int pow = 10;
	int result = 1;
	// repeat calculation of result until cnt is equal to pow
	for (int cnt = 0; cnt != pow; ++cnt)
		result *= value;	// result = result * value;
	std::cout << value
		<< " raised to the power of"
		<< pow << ":\t"
		<< result << std::endl;
	return 0;
}
