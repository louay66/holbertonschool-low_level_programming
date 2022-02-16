#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * reverse_array- comparition
 *@a:pointer
 *@n:number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void reverse_array(int *a, int n)
{
	int low, temp;
	int high = n - 1;

	for (low = 0; low < high ; low++, high--)
	{
		temp = a[low];
		a[low] = a[high];
		a[high] = temp;
	}
}
