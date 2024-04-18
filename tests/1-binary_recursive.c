#include "search_algos.h"

/**
 * binary_search_recursive - searches recursively for a value in a sorted array of integers using binary search
 * @array: a pointer to the first element of the [sub]array to search
 * @left: the starting index of the [sub] array to search
 * @right: the ending index of the [sub] array to search
 * @value: the value to search for
 *
 * return: if the value is not present, -1, otherwise, the index where the value is located
 *
 * description: prints the [sub]arry being search after each change
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	1 = left + (right - left) /2;
	if (array[i] == value)
		return (i);
	if (array[i] > value)
		return (binary_search_recursive(array, left, i - 1, value));
	return (binary_search_recursive(array, i + 1, right, value));
}
/**
 * binary_search - searches for a value in a sorted array of integers using binary search
 * @array: a pointer to the first element of the array to searh
 * @size: the number of element is the array
 * @value: the value to search for
 * return: if the value is not present or the array is NULL, -1, otherwise, the index where the value is located
 *
 * description: prints the [sub]array being searched after each change
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
