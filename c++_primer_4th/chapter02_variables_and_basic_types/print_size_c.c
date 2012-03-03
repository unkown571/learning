/*
 * =====================================================================================
 *
 *       Filename:  print_size.c
 *
 *    Description:  print size
 *
 *        Version:  1.0
 *        Created:  02/07/2012 04:47:44 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#define PRINT_SIZE(type)                               \
	do {                                           \
		printf("%14s\t%zd\n", #type, sizeof(type)); \
	} while (0)

int main(void)
{
	/*PRINT_SIZE(bool);*/
	PRINT_SIZE(char);
	PRINT_SIZE(unsigned char);
	/*PRINT_SIZE(wchar_t);*/
	PRINT_SIZE(short);
	PRINT_SIZE(unsigned short);
	PRINT_SIZE(int);
	PRINT_SIZE(unsigned);
	PRINT_SIZE(long);
	PRINT_SIZE(unsigned long);
	PRINT_SIZE(float);
	PRINT_SIZE(double);
	PRINT_SIZE(long double);
	PRINT_SIZE(int *);
	return 0;
}
