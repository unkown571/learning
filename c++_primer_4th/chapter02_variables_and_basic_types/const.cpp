/*
 * =====================================================================================
 *
 *       Filename:  const.cpp
 *
 *    Description:  const qualifier
 *
 *        Version:  1.0
 *        Created:  02/08/2012 06:55:31 PM
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
	for (int index = 0; index != 512; ++index)
		;
	const int bufSize = 512; // input buffer size
	for (int index = 0; index != bufSize; ++index)
		;

	// const must be initialized when defined
	const std::string hi = "hello!"; // ok: initialized
	const int i, j = 0; // error! i is unnitialized const

	// const objects are local to a file by default
	//
	// When we define a nonconst global variable, it is accessible
	// throughout the program. We can define a nonconst variable in one
	// file and make an appropriate declaration in anther file to use it
	// it that file.
	//
	// Nonconst variables are extern by default. To make a const 
	// variable accessible to other files we must explicitly specify 
	// that it is extern, such as `extern const int bufSize = fcn();'.
	return 0;
}
