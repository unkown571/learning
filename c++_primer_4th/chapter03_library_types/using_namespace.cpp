/*
 * =====================================================================================
 *
 *       Filename:  using_namespace.cpp
 *
 *    Description:  namespace using declaration
 *
 *        Version:  1.0
 *        Created:  02/09/2012 04:50:24 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
// using declarations states our intent to use these names from 
// the namespace std
using std::cin;
using std::cout;
using std::string;

int main()
{
	string s; // ok: string is now a synonym for std::string
	cin >> s; // ok: cin is now a synonym for std::cin
	cout << s; // ok: cout is now a synonym for std::cout
	std::cout << s; // ok: explicitly use cout from namespace std

	// their is one case in which we should always use the fully qualified
	// library names: inside header files. If we place a using declaration
	// in a header file, it will be copied by preprocessor to every program
	// that include the header, whether that program wants the using
	// declaration or not.
	//
	// In general, it is good practice for headers to define only what is
	// strictly necessary.
	return 0;
}
