#include "main.h"
#include <unistd.h>

/**
 * _write - writes the character c to stdout
 * @c: The character to print
 * @len: len of c
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _write(char c, int len)
{
	return (write(1, &c, len));
}
