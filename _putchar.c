#include <unistd.h>
/**
 * _putchar: function to output character
 * @c: character to be displayed
 * Return: 1 for success or -1 if unsuccessful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
