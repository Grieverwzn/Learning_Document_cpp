// FunctionTest.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include <iostream>
# include <cmath>

using namespace std;



int main()
{
	char array_1[5];
	char *point_1, *point_2;
	int flag=0;
	int i;

	point_1 = array_1; // 注意：array_1实际上是一个地址；
	for (int i=0; i<5; i++, point_1++){
		cin >> *point_1;
	}

	point_1 = array_1;//回到首位地址
	point_2 = array_1+4;

	while (point_1 != point_2) {
		if (*point_1 != *point_2) {
			flag = 1;
			break;
		}
		point_1++;
		point_2--;
	}
	if (flag)
		cout << "NOT OK";
	else
		cout << "OK";

	system("pause");
    return 0;

}

