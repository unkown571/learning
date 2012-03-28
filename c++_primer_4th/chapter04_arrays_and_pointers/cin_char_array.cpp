/*
 * =====================================================================================
 *
 *       Filename:  cin_char_array.c
 *
 *    Description:  This is a test for std::cin array of type char.
 *
 *        Version:  1.0
 *        Created:  03/28/2012 04:04:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://www.zhangliancheng.com
 *
 * =====================================================================================
 */

#include <iostream>
using namespace std;

int main(void)
{
	char tmp[100];
	cin >> tmp;
	cout << tmp;

	// won't work for int array
	//int ints[100];
	//cin >> ints;
	//cout << ints[0];

	return 0;
}
