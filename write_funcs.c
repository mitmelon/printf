#include <main.h>
#include <unistd.h>

/**
 * _putchar- writes the character c to the stdout
 * @c: character to print
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately
 * Description: _putchar uses a loacal buffer of 1024 to call write
 * as little as possible
 */
int_putchar(char c)
{
	static charbbuffer[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buff, i);
		i = 0;
	}
	if (c != -1)
	{
		buff[i] = c;
		i++;
	}
	return (1);
}
/**
 * _puts- prints a string to stdout
 * @string: pointer to the string of print
 * Return: number of chas written
 */
int _puts(char *str)
{
	register int i;

	for (i = 0, str[i] != '\0' ; i++)
		_putchar (str[i]);
	return (i);
}

