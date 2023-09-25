#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: the destination memory to store in
 *@src: the copied memory
 *@n: number of bytes
 *
 *Return:  a pointer to dest memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s;
	int i = n;

	for (s = 0; s < i; s++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}
