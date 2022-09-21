#include "main.h"

/**
 * reverse_array -> reversing an array
 * @a: array of integers
 * @n: an element of an array
 * Return: Always 0 (success)
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < (n / 2); x++)
	{
		y = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = y;
	}
}
