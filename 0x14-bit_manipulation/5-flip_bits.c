#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to convert
 * from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;
unsigned int count = 0;

while (diff)
{
count += diff & 1;
diff >>= 1;
}

return (count);
}

