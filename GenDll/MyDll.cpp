#define _MYDLL_EXPORTS
#include "MyDll.h"
#include <iostream>
using namespace std;

int MyDll::add(int a, int b)
{
	int sum = 0;
	sum = a + b;
	cout <<"sum:" << sum << endl;
	return sum;
}

MyDll::~MyDll()
{
	cout << "destory done!" << endl;
}
