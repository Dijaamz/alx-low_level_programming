/**
 * binary_to_uint - convert binary string to decimal
 * @c: binary string
 *
 * Return: decimal (unsigned int)
 */

unsigned int binary_to_uint(const char *c)
{
	unsigned int decimal;
	unsigned int i;

	for (decimal = 0, i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == '1')
			decimal = (decimal << 1) | 1;
		else if (c[i] == '0')
			decimal <<= 1;
		else if (c[i] != '0' && c[i] != '1')
			return (0);
	}

	return (decimal);
}
