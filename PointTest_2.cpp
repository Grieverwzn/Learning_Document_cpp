// FunctionTest.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include <iostream>
# include <cmath>

using namespace std;



int main()
{
	int array_1[5];
	int a = 3;
	int *p,*qq;
	qq = &a;
	cout << qq[0] << endl;
	cout << qq[1] << endl;
	cout << qq << endl;
	p = array_1;
	for (int i = 0; i < 5; i++, p++) {
		cin >> *p;
	}
	p = array_1;

	cout << "array_1:" << array_1 << endl; // 输出的是数组首位的地址
	cout << "array_1+1:" << array_1+1 << endl;
	cout << "array_1[0]:" << &array_1[0] << endl;

	cout << "===============" << endl;
	p = array_1;
	cout << "p:" << p << endl; // 输出的是数组首位的地址
	cout << "p+1:" << p+1 << endl; // 输出的是数组次位的地址
	p++;
	cout << "p++:" << p++ << endl;// 显示之后，地址再向右走一位
	cout << "p:" << p << endl;
	cout << "*p:" << *p << endl;

	p = array_1;
	for (int i = 0; i <= 4; i++) {
		cout << "Address of array_1[" << i << "] is" << &array_1[i] << endl;
		cout << "Address of array_1[" << i << "] is" << array_1+i << endl;
		cout << "Address of array_1[" << i << "] is" << &p[i] << endl;
		cout << "Number of array_1[" << i << "] is" << p[i] << endl;
		cout << "Number of array_1[" << i << "] is" << *(array_1 + i) << endl;
	}

	p = array_1;
	cout <<"p[0]:"<< p[0] << endl;
	cout << "p[3]:" << p[3] << endl;
	cout << "p[4]:" << p[4] << endl;
	p++;
	cout << "p[0]:" << p[0] << endl;
	cout << "p[3]:" << p[3] << endl;
	cout << "p[4]:" << p[4] << endl; //越界


	p = array_1;
	for (int i = 0; i < 5; i++, p++) {
		cout << *p << endl;
	}
	system("pause");
    return 0;

}

