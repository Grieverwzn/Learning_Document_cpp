// FunctionTest.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
# include <iostream>
# include <cmath>

using namespace std;



int main()
{
	// Define numbers
	int num_1;
	num_1 = 1;
	float num_2;
	num_2 = 10.0;
	// Define points
	int *p, *qq;
	float *w;
	p = &num_1;
	qq = p;// +num_1;
	w = &num_2;

	cout <<"num_1="<< num_1 << endl;
	cout << "size of p:" << sizeof(p) << endl;
	cout <<"(Address of num_1)p=" << p << endl;
	cout << "(Address of num_1)qq=" << qq << endl;
	cout << "(Address of num_2)w=" << w << endl;
	cout << "(Address of num_2)w-1=" << w-1 << endl;
	cout << "&p=" << &p << endl;
	cout << "&qq=" << &qq << endl;
	cout << "*p="<< *p << endl;
	cout << "*qq=" << *qq << endl;

	*p = 20;
	cout << num_1 << endl;
	cout << "(Address of num_1)*qq=" << *qq << endl;
	
	int num_3 = 11, num_4 = 22;
	int *p1, *p2,*q,temp;
	p1 = &num_3;
	p2 = &num_4;
	cout << "(Address of num_3)p1="<<p1 << '\t' << "(Address of num_4)p2=" << p2 << endl;
	if (num_3 < num_4) {
		q = p1;
		p1 = p2;
		p2 = q;
	}
	cout << "num_3="<<num_3<<'\t' << "num_4=" <<num_4 << endl;
	cout << "p1=" << p1<< '\t' << "p2=" << p2 << endl;
	cout << "*p1=" << *p1 << '\t' << "*p2=" << *p2 << endl;

	system("pause");
    return 0;

}

