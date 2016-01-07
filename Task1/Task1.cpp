// Task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <xstring>

using namespace std;

int main()
{
	char* ch_pointer;
	int int_ar[10];
	int (&int_ref)[10]=int_ar;
	string *string_arr_pointer;
	char **p_p_char;
	const int co = 10;
	int * const c = new int(10);
	const int* c_v = &co;
	return 0;
}

