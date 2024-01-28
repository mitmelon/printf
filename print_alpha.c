#include <main.h>

/**
 * print_string - loops through a string and print every character
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passsed to _printf
 * Return: number of character printed
 */
int print_string(va_list l, flags_t *f)
{

	char *s = var_arg(l, char *)
	(void) f;
	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints a character
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flag that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_char(va_list l, flag_t f *)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}

