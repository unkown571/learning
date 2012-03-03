/*
 * =====================================================================================
 *
 *       Filename:  scope.cpp
 *
 *    Description:  variable scope
 *
 *        Version:  1.0
 *        Created:  02/08/2012 06:35:59 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>
/*
 * Program for illustration purposes only:
 * It is bad style for a function to use a global variable and then
 * define a local variable with the same name.
 */
std::string s1 = "hello"; // s1 has global scope
int main()
{
	int sum = 0;
	// sum values from 1 up to 10 inclusive
	for (int val = 1; val <= 10; ++val)
		sum += val; //equivalent to sum = sum + val;

	std::cout << "Sum of 1 to 10 inclusive is "
		<< sum << std::endl;

	std::string s2 = "world"; // s2 has local scope
	// uses global s1; prints "hello world"
	std::cout << s1 << " " << s2 << std::endl;
	int s1 = 42; // s1 is local and hides global s1
	// uses local s1; prints "42 world"
	std::cout << s1 << " " << s2 << std::endl;

	return 0;
}
