// Task12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


void CountBigrams(const string& word, int* bigrams_count, int number_of_letters)
{
	char f_ch = 'a';
	for (int i = 0; i < number_of_letters; i++)
	{
		char s_ch = 'a';
		for (int j = 0; j < number_of_letters; j++)
		{
			for (int str_i = 0; str_i < word.length() - 1; str_i++)
			{
				if ((word[str_i] == f_ch) && (word[str_i + 1] == s_ch))
				{
					*(bigrams_count + i*number_of_letters + j) += 1;
				}
			}
			s_ch++;
		}
		f_ch++;
	}
}

void CountBigrams(char* word, int* bigrams_count, int number_of_letters)
{
	char f_ch = 'a';
	for (int i = 0; i < number_of_letters; i++)
	{
		char s_ch = 'a';
		for (int j = 0; j < number_of_letters; j++)
		{
			char* tmp = word;
			while (*(tmp+1) != '\0')
			{
				if ((*tmp == f_ch) && (*(tmp + 1) == s_ch))
				{
					*(bigrams_count + i*number_of_letters + j) += 1;
				}
				tmp++;
			}
			s_ch++;
		}
	}
	f_ch++;
}

int main()
{
	int* bigrams_count = new int[28 * 28];
	int k = 0;
	for (int i = 0; i < 28 * 28; i++)
	{
		bigrams_count[i] = 0;
		k++;
	}
	//string word;
	CountBigrams("aaababb", bigrams_count, 28);
	cout << bigrams_count[0] << endl;
	cout << bigrams_count[2] << endl;
	return 0;
}

