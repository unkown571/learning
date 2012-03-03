/*
 * =====================================================================================
 *
 *       Filename:  c_style_string.cpp
 *
 *    Description:  c style string in c++
 *
 *        Version:  1.0
 *        Created:  02/10/2012 10:04:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	/*
	 * A string literal is an array of const char, it is C-Style
	 * character string.
	 * C-style strings are not actually a type in either C or C++, 
	 * instead, it is C-style strings are null-terminated arrays
	 * of characters.
	 */
	// all the following except ca1 and cp1 are C-style strings
	char ca1[] = {'C', '+', '+'}; // no null, not C-style string
	char ca2[] = {'C', '+', '+', '\0'}; // explicit null, C-style string
	char ca3[] = "C++"; // null terminator added automatically, C-style str
	const char *cp = "C++"; // as above, C-style string
	char *cp1 = ca1; // points to first element of a array, not C-style str
	char *cp2 = ca2; // points to first element of a null-terminated array

	const size_t BUFSIZE = 100;
	char buffer[BUFSIZE];
	char *p = buffer;
	const char *q = cp;
	while (*p++ = *q++) // C-style string copy
		;
	cout << buffer << endl;

	/*
	 * C Library String Function <cstring>
	 *
	 * strlen(s)
	 * strcmp(s1, s2)
	 * strcat(s1, s2)
	 * strcpy(s1, s2)
	 * strncat(s1, s2, n)
	 * strncpy(s1, s2, n)
	 *
	 * These functions do not check their string parameters.
	 *   the pointers passed to these functions must nonzero
	 *   each must point to the initial char in a null-terminated array
	 *   if write, the programmer must ensure the target is big enough
	 */
	const char *cp3 = "A string example";
	const char *cp4 = "A different string";

	int i = strcmp(cp3, cp4); // i is positive
	cout << i << endl;
	i = strcmp(cp4, cp3); // i is negative
	cout << i << endl;
	i = strcmp(cp3, cp3); // i is zero
	cout << i << endl;
	
	cout << "strlen(" << cp3 << ") = " << strlen(cp3) << endl; // 16
	cout << "strlen(" << cp4 << ") = " << strlen(cp4) << endl; // 18

	char largeStr[16 + 18 + 2]; // will hold cp3 a space and cp4
	strcpy(largeStr, cp3); // copy cp3 to largeStr
	cout << "largeStr:" << largeStr << endl;
	strcat(largeStr, " ");// add a space at end of largeStr
	cout << "largeStr:" << largeStr << endl;
	strcat(largeStr, cp4); // concatenate cp4 to largeStr
	cout << "largeStr:" << largeStr << endl;

	/*
	 * When using C-style strings, use the `strn' functions.
	 */
	memset(largeStr, 0, sizeof(largeStr)); // set all bytes are 0
	strncpy(largeStr, cp3, 17); // size to copy includes the null, strlen+1
	cout << "largeStr:" << largeStr << endl;
	strncat(largeStr, " ", 2); // good habit
	cout << "largeStr:" << largeStr << endl;
	// note: sizeof(cp4) is 4, because cp4 is type const char *, a pointer
	//strncat(largeStr, cp4, sizeof(cp4)); // adds at most 4 characters
	strncat(largeStr, cp4, 19);
	cout << "largeStr:" << largeStr << endl;

	// it is easier, safer and more efficient to use std::string
	string largeStr2 = cp3;
	largeStr2 += " ";
	largeStr2 += cp4;
	cout << largeStr2 << endl;

	/* 
	 * Mixing Library strings and C-style strings
	 * 1. Initialize or assign to a string from a C-style string
	 * 2. Use C-style string as one of two operands to the string addition
	 * 3. Use C-style string as the right-hand operand to the compound
	 * assignment operators.
	 * 4. A string member c_str return a C-style character string, if a 
	 * program needs continuing access to the data, then the program must
	 * copy the array returned by c_str.
	 */
	string st3("Hello World"); // st3 holds Hello World
	//char *str = st3.c_str(); // error: should be const char *
	const char *str2 = st3.c_str(); // ok

	const size_t arr_size = 6;
	int int_arr[arr_size] = {0, 1, 2, 3, 4, 5};
	// initialize vector using array, the second pointer 
	// points one past the last element to be copied
	vector<int> ivec(int_arr, int_arr + arr_size);
	// copy 3 elements: int_arr[1], int_arr[2], int_arr[3]
	vector<int> ivec2(int_arr + 1, int_arr + 4);

	return 0;
}
