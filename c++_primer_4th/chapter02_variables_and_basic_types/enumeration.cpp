/*
 * =====================================================================================
 *
 *       Filename:  enumeration.cpp
 *
 *    Description:  enumerations in c++
 *
 *        Version:  1.0
 *        Created:  02/08/2012 07:40:49 PM
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
	const int input = 0;
	const int output = 1;
	const int append = 2;

	// enumeration provide an alternative method of not only
	// defining but also grouping sets of integral constants.
	enum open_modes {intput, output, append}; // the first is assigned 0

	// enumerations are const vaules
	// shape is 1, sphere is 2, cylinder is 3, polygon is 4
	enum Forms {shape = 1, sphere, cylinder, polygon};

	// An enumerator value need not be unique
	// point2d is 2, point2w is 3, point3d is 3, point3w is 4
	enum Points {point2d = 2, point2w, point3d = 3, point3w};

	// Each enum defines a unique type, an object of enumeration type
	// may be initialized or assigned only by one of its enumerators
	// or by another object of the same enumeration type.
	Points pt3d = point3d; //ok: point3d is a Points enumerator
	Points pt2w = 3; // error: pt2w initialized with int! type error
	pt2w = polygon; // error: polygon is not a Points enumerator
	pt2w = pt3d; // ok: both are objects of Points enum type

	return 0;
}
