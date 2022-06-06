#include "function_pointers.h"

/**
 * int_index - searches array
 * @array:  function argument
 * @size:  function argument
 * @cmp:  function argument
 * Return: intger
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, k;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			k = cmp(array[i]);
			if (k)
			{
				return (i);
			}
			else if (i + 1 == size && !j)
			{
				return (-1);
			}
		}
	}
	else
		return (-1);
	return (0);
}
