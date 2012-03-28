/*
 * =====================================================================================
 *
 *       Filename:  insert_sort.c
 *
 *    Description:  insert sort in c
 *
 *        Version:  1.0
 *        Created:  03/07/2012 10:27:27 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://www.zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstddef>
using namespace std;

void insert_sort(int *a, size_t sz)
{
	for (size_t i = 1; i < sz; ++i)
	{
		int t;
		size_t j;
		//Note: because j is unsigned, when j == 0 then --j will be a very big number
		//so we should test to ensure j < i
		for (j = i - 1; j >= 0 && j < i ; --j)
		{
			if (a[j] > a[j+1])
			{
				t = a[j+1];
				a[j+1] = a[j];
				a[j] = t;
			}
		}
		//a[j+1] = t;
	}
}

int main(void)
{
	int int_arr[] = {2, 1, 8, 9, 11, 7, 19, 6};
	for (size_t i = 0; i < sizeof(int_arr)/sizeof(int_arr[0]); ++i)
		cout << int_arr[i] << " ";
	cout << endl;

	insert_sort(int_arr, sizeof(int_arr)/sizeof(int_arr[0]));
	for (size_t i = 0; i < sizeof(int_arr)/sizeof(int_arr[0]); ++i)
		cout << int_arr[i] << " ";
	cout << endl;

	return 0;
}
