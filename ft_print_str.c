/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yublee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:39:59 by yublee            #+#    #+#             */
/*   Updated: 2023/12/02 17:05:45 by yublee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_write(*str);
		str++;
	}
}

void	ft_print_str(char *str)
{
	if (!str)
	{
		ft_write('(');
		ft_write('n');
		ft_write('u');
		ft_write('l');
		ft_write('l');
		ft_write(')');
		return ;
	}
	ft_putstr(str);
}
