#ifndef FT_PRINTF_C
#define FT_PRINTF_C

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_printf(const char *format, ...);
void	ft_intprint(char c, int i);
void	ft_strprint(char c, char *str);
void	ft_ptrprint(char c, void *ptr);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putstr(char *str);
void	ft_putaddress(void *ptr);

#endif
