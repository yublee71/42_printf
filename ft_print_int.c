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

void	ft_putnbr(int nb)
{
	char	temp;

	temp = '0';
	if (nb < 0)
	{
		ft_write('-');
		if (nb <= -10)
			ft_putnbr(-(nb / 10));
		ft_putnbr(-(nb % 10));
	}
	while (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	if (nb < 10 && nb >= 0)
	{
		temp += nb;
		ft_write(temp);
	}
}

void	ft_print_int(char c, int i)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(i);
	else if (c == 'c')
		ft_write(i);
	else if (c == '%')
		ft_write(i);
}
