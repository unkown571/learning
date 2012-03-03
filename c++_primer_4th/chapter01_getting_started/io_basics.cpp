/*
 * =====================================================================================
 *
 *       Filename:  io_basics.cpp
 *
 *    Description:  A Program that Uses the IO Library
 *
 *        Version:  1.0
 *        Created:  02/06/2012 10:12:12 PM
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
	std::cout << "Enter two numbers: " << std::endl;
	//std::cout << "Enter two numbers: ";
	//std::cout << std::endl; // write a newline and flush the buffer
	int v1, v2; // defined but uninitialized
	std::cin >> v1 >> v2;
	// print string literals and arithmetic expression
	std::cout << "The sum of " << v1 << " and " << v2
		<< " is " << v1 + v2 << std::endl; 
	return 0;
}
