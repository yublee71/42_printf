#ifndef FT_PRINTF_C
#define FT_PRINTF_C

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_printf(const char *format, ...);
void	ft_putnbr_base(int nbr, char *base);

#endif
