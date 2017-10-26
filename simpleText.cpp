#include "stdafx.h"
#include <random>


int main()
{
	int array[10];
	for (unsigned char i = 0; i < 10; i++)
	{
		array[i] = rand() % 10;
	}
	int maxValue1 = array[0];
	int maxValue2 = array[0];
	int* point = &maxValue1;
	for (unsigned char i = 1; i < 10; i++)
	{
		if (array[i] > *point)
		{
			*point = array[i];
			if (point == &maxValue1)
			{
				point = &maxValue2;
			}
			else
			{
				point = &maxValue1;
			}
		}
	}
	if (maxValue1 < maxValue2) 
	{
		std::swap(maxValue1, maxValue2);
	}

    return 0;
}




