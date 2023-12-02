/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yublee <yublee@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:05:18 by yublee            #+#    #+#             */
/*   Updated: 2023/12/02 18:07:13 by yublee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * %c 99 Prints a single character.
 * %s 115 Prints a string (as defined by the common C convention).
 * %p 112 The void * pointer argument has to be printed in hexadecimal format.
 * %d 100 Prints a decimal (base 10) number.
 * %i 105 Prints an integer in base 10.
 * %u 117 Prints an unsigned decimal (base 10) number.
 * %x 120 Prints a number in hexadecimal (base 16) lowercase format.
 * %X 88 Prints a number in hexadecimal (base 16) uppercase format.
 * %% 37 Prints a percent sign
 */

void	ft_intprint(char c, int i)
{
	if (c == 'd' || c == 'i')
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

void	ft_strprint(char *str)
{
	ft_putstr(str);
}

void	ft_ptrprint(void *ptr)
{
	write(1, "0x", 2);
	ft_putptr_base((long unsigned int)ptr, "0123456789abcdef");
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
				|| type == 'x' || type == 'X' || type == 'c')
				ft_intprint(type, va_arg(args, int));
			else if (type == 's')
				ft_strprint(va_arg(args, char *));
			else if (type == 'p')
				ft_ptrprint(va_arg(args, void *));
			else if (type == '%')
				write(1, &type, 1);
			else
				return (1);
			i++;
		}
		i++;
	}
	va_end(args);
	return (0);
}
