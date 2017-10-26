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
	int* pFirstMax = &maxValue1;
	int* pSecondMax = &maxValue2;
	for (unsigned char i = 1; i < 10; i++)
	{
		if (array[i] > *pSecondMax)
		{
			*pSecondMax = array[i];
			if (*pSecondMax > *pFirstMax)
			{
				std::swap(pFirstMax, pSecondMax);
			}
		}
	}
	if (maxValue1 < maxValue2)
	{
		std::swap(maxValue1, maxValue2);
	}

	return 0;
}


