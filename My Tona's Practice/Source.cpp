#include <iostream>
#include <string>
#include <ctime>
#include <limits.h>

#include "MyList.h"

void separator(const std::wstring & c, wchar_t sign)
{
	size_t length = c.length();
	for (size_t i = 0; i < length; i++)
	{
		if (c[i] != sign)
		{
			std::wcout << c[i];
		}
		else
		{
			std::wcout << "\n";
		}		
	}
}

void check_separator()
{
	std::wstring mystr;
	wchar_t sign;

	std::wcin >> mystr;
	std::wcin >> sign;

	separator(mystr, sign);
}

void hundred_ints(int max, int min)
{
	//сюда диапазон от INT_MIN до INT_MAX
	//учитывая что диапазон rand() генерирует другой диапазон
	srand(time(NULL));
	int arr[100];
	int maximum = min;
	int minimum = max;
	int average = 0;

	for (int i = 0; i < 100; i++)
	{
		arr[i] =  rand()% max + min;
		average += arr[i];

		if (arr[i] > maximum)
		{
			maximum = arr[i];
		}

		if (arr[i] < minimum)
		{
			minimum = arr[i];
		}
	}

	average = average / 100;

	for (auto var : arr)
	{
		std::cout << var << " ";
	}

	std::cout << "\n\n";

	std::cout << average << " " << maximum << " " << minimum << std::endl;	
}

int main()
{
	setlocale(LC_ALL, ".868");

	//check_separator(); // задание № 1
	
	//hundred_ints(50, 5); //задание № 2
	//#define INT_MIN     (-2147483647 - 1) // minimum (signed) int value
	//#define INT_MAX       2147483647    // maximum (signed) int value

	__asm nop
}