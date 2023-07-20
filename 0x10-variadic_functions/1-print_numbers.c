#include "variadic_functions.h"

/*
 * print-numbers - function that prints numbers
 * @separator:string printed between numbers
 * @n:variable that represents arguments
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args,n);

	for(i = 0; i < n; i++)
	{
		if(!separator)
			printf("%d", va_arg(args,int));
		else if(separator && i == 0)
			printf("%d",va_arg(args,int));
		else
			printf("%s%d",separator,va_arg(args,int));
	}

		va_end(args);

		printf("\n");
}
