/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yublee <yublee@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:04:43 by yublee            #+#    #+#             */
/*   Updated: 2023/12/07 17:23:12 by yublee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *format, ...);
void	ft_whattype(char type, va_list args);
size_t	ft_write(char c, int n);
void	ft_print_int(char c, int i);
void	ft_print_unsignedint(char c, unsigned int i);
void	ft_print_str(char *str);
void	ft_print_ptr(void *ptr);
void	ft_putnbr(int nb);
int		base_is(char *base);
void	ft_putunsignednbr_base(long unsigned int nbr, char *base);
void	ft_putstr(char *str);

#endif
