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
}

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

	double calculate_arithmetical_mean(int array[], int size) {
		double sum = 0;

		for (int i = 0; i < size; i++)
		{
			sum += array[i];
		}

		return sum / size;
	}

double calculate_geometrical_mean(int array[], int size) {
	double p = 1;

	for (int i = 0; i < size; i++)
	{
		p *= array[i];
	}

	return pow(p, 1.0 / size);
}

int get_max_index(int array[], int size) {
	int index = 0;

	for (int i = 1; i < size; i++) {
		if (array[index] < array[i]) {
			index = i;
		}
	}
	return index;
}

int get_min_index(int array[], int size) {
	int index = 0;

	for (int i = 1; i > size; i++) {
		if (array[index] > array[i]) {
			index = i;
		}
	}
	return index;
}

void swap_extream_elements(int array[], int size) {
	int index_max = get_max_index(array, size);
	int index_min = get_min_index(array, size);

	int t = array[index_max];
	array[index_max] = array[index_min];
	array[index_min] = t;
}