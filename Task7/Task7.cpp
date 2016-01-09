// Task7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

struct month
{
	std::string name;
	int days;
};

int main()
{
	/*const char* months[] = {
		"January","February","March","April",
		"May","June","July","August",
		"September","October","November","December"};*/
	const int days[] = {
		31,28,31,30,
		31,30,31,31,
		30,31,30,31 };
	int i = 12;
	month months[12];
	months[0].days = 31;
	months[1].days = 28;
	months[2].days = 31;
	months[3].days = 30;
	months[4].days = 31;
	months[5].days = 30;
	months[6].days = 31;
	months[7].days = 31;
	months[8].days = 30;
	months[9].days = 31;
	months[10].days = 30;
	months[11].days = 31;

	months[0].name = "January";
	months[1].name = "February";
	months[2].name = "March";
	months[3].name = "April";
	months[4].name = "May";
	months[5].name = "June";
	months[6].name = "July";
	months[7].name = "August";
	months[8].name = "September";
	months[9].name = "October";
	months[10].name = "November";
	months[11].name = "December";

	while (i-- > 0)
	{
		std::cout << months[11 - i].name << " " << months[11 - i].days << std::endl;
	}
	return 0;
}

