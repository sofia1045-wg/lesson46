#include "logic.h"

int get_max(int array[], int size) {
	int max = array[0];

	for (int i = 1; i < size; i++)
	{
		if (max < array[i]) {
			max = array[i];
		}
	}

	return max;

	int get_min(int array[], int size) {
		int min = array[0];

		for (int i = 1; i < size; i++)
		{
			if (min > array[i]) {
				min = array[i];
			}
		}

		return min;
	}