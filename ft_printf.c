#include "ft_printf.h"

/*
 * %c Prints a single character.
 * %s Prints a string (as defined by the common C convention).
 * %p The void * pointer argument has to be printed in hexadecimal format.
 * %d Prints a decimal (base 10) number.
 * %i Prints an integer in base 10.
 * %u Prints an unsigned decimal (base 10) number.
 * %x Prints a number in hexadecimal (base 16) lowercase format.
 * %X Prints a number in hexadecimal (base 16) uppercase format.
 * %% Prints a percent sign
 */

void	ft_intprint(char c, int i)
{
	if (c == 'd')
		ft_putnbr_base(i, "0123456789");
	else if (c == 'i')
		ft_putnbr_base(i, "0123456789");
	else if (c == 'u')
		ft_putnbr_base((unsigned int)i, "0123456789");
	else if (c == 'x')
		ft_putnbr_base(i, "0123456789abcdef");
	else if (c == 'X')
		ft_putnbr_base(i, "0123456789ABCDEF");
	else if (c == 'c')
		write(1, &i, 1);
	else if (c == '%')
		write(1, &i, 1);
}

void	ft_strprint(char c, char *str)
{
	if (c == 's')
		ft_putstr(str);
}

void	ft_ptrprint(char c, void *ptr)
{
	if (c == 'p'&& ptr)
		return ;
		//ft_putaddress(ptr);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	size_t		i;
	char		type;

	va_start(args, format);
	i = 0;
	while (format[i] && format[i + 1])
	{
		if (format[i] != '%')
			write(1, &format[i], 1);
		else
		{
			type = format[i + 1];
			if (type == 'd' || type == 'i' || type == 'u'
				|| type == 'x' || type == 'X' || type == 'c' || type == '%')
				ft_intprint(format[i + 1], va_arg(args, int));
			if (format[i + 1] == 's')
				ft_strprint(format[i + 1], va_arg(args, char *));
			if (format[i + 1] == 'p')
				ft_ptrprint(format[i + 1], va_arg(args, void *));
			else
				return (1);
		}
		i++;
	}
	va_end(args);
	return (0);
}
