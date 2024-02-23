#include "sort.h"
#include <stddef.h>
#include <stdio.h>

/**
 * swap - Entry point
 * @x: number
 * @y: number
 * Return: nothing
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * bubble_sort - sorting method
 * @array: aligns numbers
 * @size: checks the size of all numbers
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if(array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {75, 34, 18, 13, 22, 10, 80};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Original array: ");
	for (i = 0; i < size; ++i)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	bubble_sort(array, size);

	printf("Sorted array: ");
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	return (0);
}
