// Bubble_sort.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include<iostream>

using namespace std;
# define num 6
int main()
{
	cout << "please write six integers" << endl;
	int bubble[num];

	char c1[5] = { '1','2','4','3','\0'};
	char c2[5] = { "2332" };// \0不计算长度
	char c3[] = { "2sdfsf332" };// \0不计算长度
	cout << c3 << '\n'; 


	// input the set to be sorted
	for (int i = 0; i < num; i++) {
		cin >> bubble[i];
	}

	// sorting
	for (int j = 2; j <= num; j++) {
		for (int i = 0; i <= num - j; i++) {
			if (bubble[i] >= bubble[i + 1]) {
				int temp = bubble[i];
				bubble[i] = bubble[i + 1];
				bubble[i + 1] = temp;
			}
		}
	}
	//cout << bubble<<endl; 不能显示数组中具体的数字
	for (int i = 0; i <= num-1 ; i++){
		cout << bubble[i]<<'\t';
	}
	system("pause");
    return 0;
}

