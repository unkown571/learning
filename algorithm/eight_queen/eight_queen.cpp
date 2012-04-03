/*
 * =====================================================================================
 *
 *       Filename:  eight_queen.cpp
 *
 *    Description:  the eight queen problem
 *
 *        Version:  1.0
 *        Created:  04/03/2012 04:02:36 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://www.zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

//判断第n行中皇后的放置位置是否合法
bool IsLegal(int *position, int n)
{
	//遍历前n-1行进行检查
	for (int i = 0;i < n; i++)
	{
		//与前面行中的出现列冲突
		if (position[i] == position[n])
		{
			return false;
		}

		//与前面行中出现对角线冲突
		if (abs(position[i] - position[n]) == n-i) 
		{
			return false;
		}
	}

	return true;
}

//对第(n+1)行进行皇后的放置
void SetQueen(int *position, int queen_num, int n = 0)
{
	static int solution_count = 0;
	if (n == queen_num)
	{
		cout << "The " << ++solution_count << "th sulotion:" << endl;
		for (int i = 0;i < queen_num; ++i)
		{
			for (int j = 0; j < queen_num; ++j)
			{
				if (j == position[i])
				{
					cout << "* ";
				}
				else
				{
					cout << "0 ";
				}
			}
			cout << endl;
		}
		cout << endl;

		return;
	}
	else
	{
		for (int column_num =0; column_num < queen_num; ++column_num)
		{
			position[n] = column_num; //将皇后放在第column_num列
			//如果通过了冲突检查，则放置下一行,否则会换下一列并检查
			//而且在函数从递归中返回的时候也会换下一列进行探测
			//以给出所有可行解
			if(IsLegal(position, n))
			{
				SetQueen(position, queen_num, n+1);
			}
		}
	}
}

int main(void)
{
	int *position; //放置的位置, position[i]表示第i行放置皇后的位置
	int queen_num; //皇后数目

	cout << "Please input the number of queens: ";
	cin >> queen_num;
	position = new int[queen_num];
	SetQueen(position, queen_num, 0);

	return 0;
}
