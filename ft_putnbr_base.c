/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yublee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:42:38 by yublee            #+#    #+#             */
/*   Updated: 2023/10/19 16:40:05 by yublee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#define MINUS "-"

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
			write(1, &MINUS, 1);
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
/*
int	main(void)
{
	char *str = "0123456789";
	for(int	i = -100; i < 100; i++)
	{
		ft_putnbr_base(i, str);
		printf("\n");
	}
	ft_putnbr_base(INT_MIN, str);
	printf("\n");
	ft_putnbr_base(INT_MAX, str);
	printf("\n");
}
*/
