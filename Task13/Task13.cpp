// Task13.cpp : Defines the entry point for the console application.
//

#include <string>
#include <iostream>


struct Date
{
	int day, month, year;
	void Read(std::string input)
	{
		day = (int(input[0])-int('0')) * 10 + int(input[1]) - int('0');
		month = (int(input[3]) - int('0')) * 10 + (int(input[4]) - int('0'));
		year = (int(input[6]) - int('0')) * 1000 + (int(input[7]) - int('0')) * 100
			+ (int(input[8]) - int('0')) * 10 + (int(input[9]) - int('0'));
	}

	void Init(int _day, int _month, int _year)
	{
		day = _day;
		month = _month;
		year = _year;
	}

	void Print() const
	{
		std::cout << day << "." << month << "." << year << std::endl;
	}
};


int main()
{
	Date d;
	std::string s;
	std::cin >> s;
	d.Read(s);
	d.Print();
	d.Init(1, 1, 12);
	d.Print();
	return 0;
}

