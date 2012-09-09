/*
 * =====================================================================================
 *
 *       Filename:  cocktail_sort.cpp
 *
 *    Description:  cocktail sort in C++
 *
 *        Version:  1.0
 *        Created:  09/09/2012 01:07:39 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://www.zhangliancheng.com
 *
 * =====================================================================================
 */

//双向冒泡 cocktail sort 

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX = 1000;
const int N = 10;

void cocktail_sort(int* a,const int& len);
inline void swap(int& x,int& y);
inline void print_array(int a[], int n, char delim = ' ');

int main(void)
{
    srand((unsigned)time(0));    
    int a[MAX],n[N];   

    for(int i=0;i<MAX;i++)
        a[i]=i;

    for(int i=0;i<N;i++)  //产生一个无序数组 
    {
        int k=rand()%(MAX-i);  
        n[i]=a[k];
        swap(a[k],a[MAX-i]);
    }  

    print_array(n, N);
    cocktail_sort(n,N);    
    print_array(n, N);

    /*
    int b[] = {117, 316, 727, 979, 325, 101, 345, 456, 788, 596};
    print_array(b, 10);
    cocktail_sort(b,10);    
    print_array(b, 10);
    */

    return 0;
}

void cocktail_sort(int* a,const int& len)  //双向冒泡排序 
{ 
    int left = 0;
    int right = len-1;

#ifdef DEBUG
    int inner_left_count = 0;
    int inner_right_count = 0;
    int outer_count = 0;
#endif
    int last_right = right;
    int last_left = left;

    while(left < right)
    {
        bool flag = false;
        for(int i=left;i<right;i++)
        {
#ifdef DEBUG
            inner_right_count++;
#endif
            // move larger to right
            if(a[i]>a[i+1])
            {
                swap(a[i],a[i+1]);
                last_right = i;
                flag = true;
            }
        } 
        if (! flag)
        {
#ifdef DEBUG
            cout << "break from -> direction" << endl;
#endif
            break;
        }
        flag = false;
        right = last_right;
#ifdef DEBUG
        print_array(a, len);
        cout << "left = " << left << ", right = " << right << endl;
#endif

        for(int i=right; i >left; --i)
        {
#ifdef DEBUG
            inner_left_count ++;
#endif
            // move smaller to left
            if(a[i]<a[i-1])
            {
                swap(a[i],a[i-1]);    
                last_left = i;
                flag = true;
            }
        } 
        if (! flag)
        {
#ifdef DEBUG
            cout << "break from <- direction" << endl;
#endif
            break;
        }
        left = last_left;
#ifdef DEBUG
        print_array(a, len);
        cout << "left = " << left << ", right = " << right << endl;
        outer_count ++;
#endif
    }
#ifdef DEBUG
    print_array(a, len);
    cout << setw(20) << "inner r-loop times: " << inner_right_count << endl;
    cout << setw(20) << "inner l-loop times: " << inner_left_count << endl;
    cout << setw(20) << "outer loop times: " << outer_count << endl;
#endif
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
