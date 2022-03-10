#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_them_all-sum of parametr
 *@n:number of prametre
 * Return: intiger
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, k = 0;
	va_list prmtr;

	va_start(prmtr, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0 ; i < n ; i++)
	{

	k = k + va_arg(prmtr, unsigned int);


	va_end(prmtr);

	}
	va_end(prmtr);
	return (k);
}
