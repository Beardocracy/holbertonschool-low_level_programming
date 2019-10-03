#include "holberton.h"
/**
  * _strncat - a function that concatenates n bytes of one string to another.
  * @dest: pointer to be appended to
  * @src: pointer to be appended
  * @n: integer of how many bytes of src to be appended to dest
  * Return: char pointer
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, src_length;

	for (src_length = 0; *(src + src_length) != '\0'; src_length++)
		;
	for (i = 0; *(dest + i) != '\0'; i++)
		;
	if (n >= src_length)
	{
		for ( ; *src != '\0'; n--, src++, i++)
			*(dest + i) = *src;
	}
	else if (n < src_length)
	{
		for ( ; n > 0; n--, src++, i++)
			*(dest + i) = *src;
		*(dest + i) = '\0';
	}
	return (dest);
}
