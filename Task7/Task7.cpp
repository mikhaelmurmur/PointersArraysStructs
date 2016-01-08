// Task7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	const char* months[] = {
		"January","February","March","April",
		"May","June","July","August",
		"September","October","November","December"};
	const int days[] = { 
		31,28,31,30,
		31,30,31,31,
		30,31,30,31 };
	int i = 12;
	while(i-->0)
	{
		std::cout << months[11-i]<<" "<<days[11-i]<<std::endl;
	}
    return 0;
}

