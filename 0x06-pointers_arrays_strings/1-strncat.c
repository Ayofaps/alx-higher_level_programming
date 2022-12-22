/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of byte from @src
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/* find size of dest array */
	while (dest[c])
		c++;

	/**
	 * src does not need to be null terminate
	 * if it contains n or more bytes
	 */
	for (i = 0; i < n && src[i];
	/* null terminate dest */
	dest[c + i] = '\0';

	return (dest);
}
