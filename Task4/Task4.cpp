// Task4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
void swap(int* first,int* second)
{
	int tmp = *first;
	*first = *second;
	*second = tmp;
}

void swap(int& first, int& second)
{
	int tmp = first;
	first = second;
	second = tmp;
}

int main()
{
	int a = 1;
	int b = 2;
	swap(a, b);
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	a = 1;
	b = 2;
	swap(&a, &b);
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

    return 0;
}

