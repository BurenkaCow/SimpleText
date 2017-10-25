#include "stdafx.h"
#include <set>
#include <random>

template<typename T>
auto FindMax(const std::multiset<T>& set)
{
	std::pair<std::multiset<T>::iterator, std::multiset<T>::iterator> pair;

	if (set.begin() != set.end())
	{
		auto value = --set.end();
		pair.first = value;
		if (value != set.begin())
		{
			pair.second = --value;
		}
		else
		{
			pair.second = set.end();
		}
	}
	else
	{
		pair.first = pair.second = set.end();
	}
	
	return pair;
}


int main()
{
	std::multiset<int> set;
	const unsigned int sizeArray = 10;
	for (unsigned char i = 0; i < sizeArray; i++)
	{
		set.insert(std::rand() % 10);
	}
	auto twoMaxNumbers = FindMax(set); // функция находит пару итераторов максимальных значений любого multise

    return 0;
}




