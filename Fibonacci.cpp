// Fibonacci.cpp: 定义控制台应用程序的入口点。

#include "stdafx.h"
# include <iostream>
#include "stdafx.h"
using namespace std;
# define NUM 20

int main()
{
	int fibonacci[NUM];
	fibonacci[0] = fibonacci[1] = 1;
	for (int i = 2; i <= NUM - 1; i++) {
		fibonacci[i]=fibonacci[i-2]+ fibonacci[i - 1];
	}
	for (int i=0;i<=NUM-1;i++){
		cout << fibonacci[i] << '\t';
	}

	system("pause");
    return 0;
}

