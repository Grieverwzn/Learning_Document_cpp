// FunctionTest.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include <iostream>
# include <cmath>

using namespace std;



int main()
{
	int array_1[5];
	int *point_1;
	int i,j,temp;

	point_1 = array_1; // 注意：array_1实际上是一个地址；
	for (int i=0; i<5; i++, point_1++){
		cin >> *point_1;
	}
	point_1 = array_1;
	for (int i=0;i<5;i++){
		for (int j = 0; j < 5 - 1 - i; j++) {
			if (*(point_1 +j)>*(point_1+ j+1)){
				temp = *(point_1 + j);
				*(point_1 + j) = *(point_1 + j + 1);
				*(point_1 + j + 1)= temp;
			}
		}
	}
	point_1 = array_1;
	for (i = 0; i < 5; i++, point_1++) {
		cout << *point_1<<'\t';
	}
	system("pause");
    return 0;

}

