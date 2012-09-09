/*
 * =====================================================================================
 *
 *       Filename:  bubble_sort.cpp
 *
 *    Description:  bubble sort in C++
 *
 *        Version:  1.0
 *        Created:  09/09/2012 10:56:50 AM
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

void bubble_sort(int a[], int n);
void bubble_sort2(int a[], int n);
void bubble_sort3(int a[], int n);
inline void swap(int& x,int& y);
inline void print_array(int a[], int n, char delim = ' ');

int main(void)
{
    int a[5] = {1, 2, 0, 5, 3};
    print_array(a, 5);
    //bubble_sort(a, 5);
    //bubble_sort2(a, 5);
    bubble_sort3(a, 5);
    print_array(a, 5);

    return 0;
}

void bubble_sort(int a[], int n)
{
    int i;
    int j;

    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < i; ++j)
        {
            if (a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
    }
}

void bubble_sort2(int a[], int n)
{
    int i;
    int j;
    int last;

    for (i = n - 1; i > 0; i = last)
    {
        for (j = 0; j < i; ++j)
        {
            if (a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
                last = j;
            }
        }
        cout << "last swapped: " << last << endl;
    }
}

void bubble_sort3(int a[], int n)
{
    int j;
    int last = n - 1;
    while (last > 0)
    {
        for (j = 0; j < last; ++j)
        {
            if (a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
                last = j;
            }
        }
        cout << "last swapped: " << last << endl;
    }
}

inline void swap(int &x,int &y)
{
    int t = x;
    x = y;
    y = t;
}

inline void print_array(int a[], int n, char delim)
{
    for (int i = 0; i < n; ++i)
        cout << a[i] << delim;
    cout << endl;
}
