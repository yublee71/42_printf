/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yublee <yublee@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:05:03 by yublee            #+#    #+#             */
/*   Updated: 2023/12/07 16:26:06 by yublee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_write(*str, 1);
		str++;
	}
}

void	ft_print_str(char *str)
{
	if (!str)
	{
		ft_putstr("(null)");
		return ;
	}
	ft_putstr(str);
}
