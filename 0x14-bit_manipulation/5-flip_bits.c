include "main.h"

/**
 * flip_bits - program returns the number of bits you would
 * need to flip to get from one number to another
 * @i: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int i, unsigned long int m)
{
   unsigned long int xor = i ^ m;
   unsigned int count = 0;

   while (xor != 0) 
   {
       count += xor & 1;
       xor >>= 1;
   }

   return count;
}
