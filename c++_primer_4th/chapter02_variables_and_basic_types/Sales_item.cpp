/*
 * =====================================================================================
 *
 *       Filename:  Sales_item.cpp
 *
 *    Description:  class Sales_item
 *
 *        Version:  1.0
 *        Created:  02/08/2012 07:58:22 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */
#incude <string>

// The only different between a class defined with the class keyword or
// the struct keyword is the default access level: By default, members
// in a struct are public; those in a class are private.
//
class Sales_item {
public:
	// operations on Sales_item objects will go here
private:
	std::string isbn;
	unsigned units_sold;
	double revenue;
};

struct Sales_item {
	// no need for public label, members are public by default
	// operations on Sales_item objects
private:
	std::string isbn;
	unsigned units_sold;
	double revenue;
};
