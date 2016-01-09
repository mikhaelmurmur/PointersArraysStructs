// Task8.cpp : Defines the entry point for the console application.
//

#include <ctime>
#include <iostream>

using namespace std;

int main()
{
	const int ARRAY_SIZE = 1000000;
	int arr[ARRAY_SIZE];
	
	clock_t begin_time = clock();

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		arr[i] = i;
	}

	cout << clock() - begin_time;
	cout << endl;
	
	begin_time = clock();
	int* start = arr;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		*(start+i) = i;
	}

	cout << float(clock() - begin_time) ;
	cout << endl;
	return 0;
}

