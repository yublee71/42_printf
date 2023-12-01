#include "ft_printf.h"

void	ft_intprint(char c, int i)
{
	if (c == 'd')
		ft_putdec(i);
	else if (c == 'i')
		ft_putint(i);
	else if (c == 'u')
		ft_putdec(i);
	else if (c == 'x')
		ft_puthexlow(i);
	else if (c == 'X')
		ft_puthexup(i);
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
	if (c == 'p')
		ft_putaddress(ptr);
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
