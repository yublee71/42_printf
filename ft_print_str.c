/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yublee <yublee@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:05:03 by yublee            #+#    #+#             */
/*   Updated: 2023/12/04 17:05:04 by yublee           ###   ########.fr       */
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
