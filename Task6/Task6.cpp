// Task6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void f(char ch)
{
	cout <<"f: "<< ch++ << endl;
}

void g(char& ch)
{
	cout << "g: " << ch++ << endl;
}

void h(const char& ch)
{
	cout << "h: " << ch << endl;
}

int main()
{
	signed char i_c = 'a';
	const signed char init_char = i_c;
	signed char ch = init_char;
	f(ch);
	cout << "after f: " << ch << endl;
	ch = init_char;
	g(ch);
	cout << "after g: " << ch << endl;
	ch = init_char;
	h(ch);
	cout << "after h: " << ch << endl;

    return 0;
}

