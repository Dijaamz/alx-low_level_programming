/**
 * set_bit - set a bit to 1 at a given index
 * @c: pointer to integer
 * @index: index to set to 1
 * Return: 1 if succeeded of -1 if failed
 */

int set_bit(unsigned long int *c, unsigned int index)
{
	unsigned long int size;
	unsigned long int val;

	size = sizeof(*c) * 8 - 1;

	if (index > size)
		return (-1);

	val = 1 << index;

	*c = val | *c;

	return (1);
}
