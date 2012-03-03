/*
 * =====================================================================================
 *
 *       Filename:  vector.cpp
 *
 *    Description:  library type vector in c++
 *
 *        Version:  1.0
 *        Created:  02/09/2012 12:34:12 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	/* 
	 * vector is not a type; it is a template that we can use to define
	 * any number of types. Each of vector type specifies an element type.
	 * Hence, vector<int> and vector<string> are types.
	 * vector<int> ivec; // ivec holds objects of type int
	 * vector<Sales_item> Sales_vec; // Sales_vec holds Sales_items
	 */

	// Ways to initialize a vector
	// vector<T> v1; /* vector that holds objects of type T; 
	//                  Default constructor v1 is empty*/
	// vector<T> v2(v1); /* v2 is a copy of v1 */
	// vector<T> v3(n, i); /* v3 has n elements of type T each value is i */
	// vector<T> v4(n); /* v4 has n copies of a value-initialized object */
	vector<int> ivec1; // ivec1 holds objects of type int
	vector<int> ivec2(ivec1); // ok: copy elements of ivec1 into ivec2
	//vector<string> svec<ivec1>; // error: svec holds strings, not ints
	vector<int> ivec4(10, -1); // 10 elements, each initialized to -1
	vector<string> svec2(10, "hi!"); // 10 strings, each initialized "hi!".

	// When we do not specify an element initializer, then the library
	// creates a value initialized element initializer for us.
	vector<int> iivec(10); // 10 elements, each initialized 0
	vector<string> svec3(10); // 10 elements, each an empty string

	// operations on vector
	// v.empty() /* return true if v is empty, otherwise return false */
	// v.size() /* return number of elements in v */
	// v.push_back(t) /* add element with value t to end of v */
	// v[n] /* return element at position n in v */
	// v1 = v2 /* replace elements in v1 by a copy of elements in v2 */
	// v1 == v2 /* return true if v1 and v2 are equal */
	// !=, <, <=, >, >=
	string word;
	vector<string> text; // empty vector
	while (cin >> word) {
		text.push_back(word); // append word to text
	}
	for (vector<string>::size_type ix = 0; ix != text.size(); ++ix)
		cout << text[ix] << endl;
	for (vector<string>::iterator it = text.begin(); it != text.end(); ++it)
		*it = "hello";
	// when dereference a const_iterator, the value returned is
	// a reference to const object. It's an iterator whose own
	// value can be changed but that cannot be used to change the
	// underlying element value.
	for (vector<string>::const_iterator it = text.begin();
			it != text.end();
			++it)
		cout << *it << endl;
	// A const_iterator should not be confused with an iterator 
	// that is const.
	vector<int> nums(10); // nums is nonconst
	const vector<int>::iterator cit = nums.begin();
	*cit = 1; // ok: cit can change its underlying element
	//++cit; // error: cannot change the value of cit
	const vector<int> nines(10, 9); // cannot change elements in nines
	// error!: cit2 could change the element it refers to and nines is const
	const vector<int>::iterator cit2 = nines.begin();
	// ok: it can't change an element value
	vector<int>::const_iterator it = nines.begin();
	//*it = 10; // error: *it is const
	++it; //ok: it is nonconst so we can change its value

	// iterator arithmetic
	vector<double>::iterator iter;
	++iter; /* increment, move the iterator one element at a time */
	iter + n; /* return a new iterator positioned n elements ahead of iter*/
	iter - n; /* return a new iterator positioned n elements behind iter */
	iter1 - iter2; /* the difference between two iterators as a value 
			  of a signed integral type named difference_type */

	return 0;
}
