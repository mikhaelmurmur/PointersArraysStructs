// Task5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	char st[] = "a short string";
	std::cout << sizeof(st) / sizeof(char) << " " << strlen(st)<<std::endl;
    return 0;
}

