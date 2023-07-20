#include "variadic_functions.h"


/*
 * sum_the_all -the variadic function to add variables
 * @n:number of arguments to be passed to the function
 * @i:loop iterator variable(for loop)
 *
 * return:return the resulting sum fro mthe variadic function
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args,n);

	for(i = 0; i < n; i++)
		sum += va_arg(args,int);

	va_end(args);

	return(sum);
}
