/*
 * =====================================================================================
 *
 *       Filename:  string_paradrome.cpp
 *
 *    Description:  paradrome test function with const string & paramter
 *
 *        Version:  1.0
 *        Created:  02/09/2012 06:13:37 PM
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
using namespace std;

string::size_type func(const string &s)
{
	return s.size();
}

bool is_pardrome(const string &s)
{
	string::size_type size = s.size();
	for (string::size_type ix = 0; ix != size / 2 ; ++ix)
		if (s[size / 2 - 1 - ix] != s[(size + 1) / 2 + ix])
			return false;
	return true;
}

int main()
{
	const char *greeting = "hello world";
	cout << func(greeting) << endl;
	cout << func("test\n") << endl;
	string s = "ok";
	cout << func(s) << endl;
	cout << boolalpha << is_pardrome("level") << endl;
	cout << boolalpha << is_pardrome("leve") << endl;
	cout << boolalpha << is_pardrome("l") << endl;

	return 0;
}
