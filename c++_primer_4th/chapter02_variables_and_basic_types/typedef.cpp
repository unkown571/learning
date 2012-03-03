/*
 * =====================================================================================
 *
 *       Filename:  typedef.cpp
 *
 *    Description:  typedef
 *
 *        Version:  1.0
 *        Created:  02/08/2012 07:36:33 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>

// A typedef defines a synonym for a type
// The identifier, or typedef name, does not introduce a new type, but
// rather a synonym for the existing data type.
typedef double wages;	// wages is a synonym for double
typedef int exam_score;	// exam_score is a synonym for int
typedef wages salary;	// indirect synonym for double

int main()
{
	wages hourly, weekly; // double hourly, weekly;
	exam_score test_result; // int test_result;
	return 0;
}
