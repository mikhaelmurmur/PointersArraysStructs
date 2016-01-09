// Task11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool isPresent(const vector<string>& words, const string word)
{
	bool result = false;
	for (auto it = words.begin(); it != words.end();it++)
	{
		if (*it == word)
			return true;
	}
}

int main()
{
	vector<string> words(0);
	string word;
	while(1)
	{
		cin >> word;
		if (word == "Quit") break;
		if(!isPresent(words,word))
		{
			words.push_back(word);
		}
	}
	sort(words.begin(), words.end());
	for (auto it = words.begin(); it != words.end(); it++)
	{
		cout << *it << endl;
	}
    return 0;
}

