#include "variadic_functions.h"

/**
 * print_numbers - prints number
 * @separator: function argument
 * @n: function argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;

	va_start(valist, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && a < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
