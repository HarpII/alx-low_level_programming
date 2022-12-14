#include "variadic_functions.h"

/**
 * print_numbers - print numbers passed
 * as arguements.
 * @separator: string that seperates the
 * numbers printed.
 * @n: number of arguments to print.
 * @...: variable arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%d%s", num, separator);
		}
		else
		{
			printf("%d", num);
		}
	}
	printf("\n");
	va_end(ap);
}
