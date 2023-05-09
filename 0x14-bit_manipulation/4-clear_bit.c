#include "main.h"

/**
 * clear_bit - program sets bit to 0 at given index
 * @m: pointer to unsigned long int
 * @index: index to set to 0
 *
 * Return: 1 if succeed -1 if failed
 */

int clear_bit(unsigned long int *m, unsigned int index)
{
	unsigned long int size, mask;

	size = sizeof(*m) * 8 - 1;

	if (index > size)
		return (-1);

	mask = 1 << index; /* shift 1 left by index bits to create a mask*/

	*m = *m & ~mask;

	return (1);
}
