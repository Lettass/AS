

#include "stdafx.h"
#include <stdio.h>


int main(void)
{
	int list[] = { 13,3245,12,255,453,3,112234 };
	int size = sizeof(list) / sizeof(int);
	int k = 0, i, j;
	if (size == 1)
	{
		printf("Spisok sostoit iz 1 unikalnogo elementa\n");
		return 0;
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (list[i] == list[j])
			{
				printf("elementi %d i %d soderg shisl %d ne unikalni\n", i, j, list[i]);
				k = 1;
			}
		}
	}

	if (!k)
	{
		printf("Vse elementi unikalni uraaaaa!\n");
		return 0;
	}
}