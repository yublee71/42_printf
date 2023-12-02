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

int	base_is(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	b;

	b = base_is(base);
	if (b)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			if (nbr <= -b)
				ft_putnbr_base(-(nbr / b), base);
			ft_putnbr_base(-(nbr % b), base);
		}
		if (nbr >= b)
		{
			ft_putnbr_base(nbr / b, base);
			ft_putnbr_base(nbr % b, base);
		}
		if (nbr < b && nbr >= 0)
			write(1, base + nbr, 1);
	}
}

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
			write(1, base + nbr, 1);
	}
}
