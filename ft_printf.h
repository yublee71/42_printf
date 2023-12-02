/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yublee <yublee@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:31:33 by yublee            #+#    #+#             */
/*   Updated: 2023/12/02 18:32:00 by yublee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
void	ft_intprint(char c, int i);
void	ft_strprint(char *str);
void	ft_ptrprint(void *ptr);
//void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putptr_base(long unsigned int nbr, char *base);
void	ft_putstr(char *str);
void	ft_putptr(void *ptr);

#endif
