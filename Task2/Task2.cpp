// Task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	void* v_point;
	int* k = new int(3);
	v_point = k;
	k = static_cast<int*>(v_point);

    return 0;
}

