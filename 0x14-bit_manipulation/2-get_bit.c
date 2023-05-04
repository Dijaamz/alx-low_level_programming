/**
 * get_bit - gets bit value at a given index
 * @b: integer to get bit value from
 * @index: index of b to get bit from
 *
 * Return: bit at index
 */

int get_bit(unsigned long int b, unsigned int index)
{
	unsigned int size;

	size = sizeof(b) * 8 - 1;

	if (index > size)
		return (-1);

	return ((b >> index) & 1);

}
