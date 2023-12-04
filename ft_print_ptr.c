/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yublee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:42:38 by yublee            #+#    #+#             */
/*   Updated: 2023/12/02 18:32:40 by yublee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_base(long unsigned int nbr, char *base)
{
	long unsigned int	b;

	b = base_is(base);
	if (b)
	{
		if (nbr >= b)
		{
			ft_putptr_base(nbr / b, base);
			ft_putptr_base(nbr % b, base);
		}
		else
			ft_write(*(base + nbr));
	}
}

void	ft_print_ptr(void *ptr)
{
	if (!ptr)
	{
		ft_write('(');
		ft_write('n');
		ft_write('i');
		ft_write('l');
		ft_write(')');
		return ;
	}
	else
	{
		ft_write('0');
		ft_write('x');
		ft_putptr_base((long unsigned int)ptr, "0123456789abcdef");
	}
}
