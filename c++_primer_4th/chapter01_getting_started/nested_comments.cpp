/*
 * =====================================================================================
 *
 *       Filename:  nested_comments.cpp
 *
 *    Description:  Demo for Nested Comment Pairs
 *
 *        Version:  1.0
 *        Created:  02/06/2012 10:37:02 PM
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
 * comment pairs /**/ cannot nets.
 * "cannot nest" is considered source code.
 * as is the rest of the program
 */
int main()
{
	std::cout << "/*";
	std::cout << "*/";
	std::cout << /*"*/"*/;
	return 0;
}
