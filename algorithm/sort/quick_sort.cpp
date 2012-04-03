/*
 * =====================================================================================
 *
 *       Filename:  quick_sort.cpp
 *
 *    Description:  quit sort algorithm 
 *    		-------------------------------------------
 *    		    avg       worst      space    stable
 *    		-------------------------------------------
 *    		    O(n*lgn)  O(n^2)     O(n*lgn)    No
 *    		-------------------------------------------
 *
 *        Version:  1.0
 *        Created:  04/03/2012 10:15:33 AM
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

int partition(int r[], int begin, int end)
{
	int i = begin;
	int j = end;

	while (i < j)
	{
		while (i < j && r[i] <= r[j])
		{
			j--;
		}
		if (i < j)
		{
			int t = r[i];
			r[i] = r[j];
			r[j] = t;
			i++;
		}

		while (i < j && r[i] <= r[j])
		{
			i++;
		}
		if (i < j)
		{
			int t = r[i];
			r[i] = r[j];
			r[j] = t;
			j--;
		}
	}

	return i;
}

void quick_sort(int r[], int begin, int end)
{
	if (begin < end)
	{
		int pivot = partition(r, begin, end);
		quick_sort(r, begin, pivot-1);
		quick_sort(r, pivot+1, end);
	}
}

int main(void)
{
	int a[20] = {78, 96, 87, 12, 84, 45, 65, 5, 76, 63, 
		64, 8, 96, 45, 71, 7, 87, 20, 31, 97};

	for (int i = 0; i < 20; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	quick_sort(a, 0, 19);

	for (int i = 0; i < 20; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
