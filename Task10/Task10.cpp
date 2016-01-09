// Task10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>


void printMonths(std::string months[12])
{
	for (int i = 0; i < 12;i++)
	{
		std::cout << months[i] << std::endl;
	}
}

int main()
{
	std::string months[] = {
		"January","February","March","April",
		"May","June","July","August",
		"September","October","November","December" 
	};
	
	printMonths(months);
	return 0;
}

