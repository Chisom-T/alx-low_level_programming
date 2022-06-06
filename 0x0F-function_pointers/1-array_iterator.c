#include "function_pointers.h"

/**
 * array_iterator - exe funct param in arr
 * @array:  function argument
 * @size:  function argument
 * @action:  function argument
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
