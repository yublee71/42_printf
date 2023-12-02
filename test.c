#include "ft_printf.h"

/*
 * %c Prints a single character.
 * %s Prints a string (as defined by the common C convention).
 * %p The void * pointer argument has to be printed in hexadecimal format.
 * %d Prints a decimal (base 10) number.
 * %i Prints an integer in base 10.
 * %u Prints an unsigned decimal (base 10) number.
 * %x Prints a number in hexadecimal (base 16) lowercase format.
 * %X Prints a number in hexadecimal (base 16) uppercase format.
 * %% Prints a percent sign
 */
#include <stdio.h>

int main(void)
{
	char *ptr;
   
	ptr = "abc";
//	printf("%lu\n",(long unsigned int)ptr);
	printf("test strings: \n char is \"%c\" \n string is \"%s\" \n decimal is \"%d\" \n integer is \"%i\" \n unsigned decimal \"%u\" \n low hexa decimal \"%x\" \n up hexa decimal \"%X\" \n void pointer \"%p\" \n percent sign \"%%\"\n", 350, "abcdefg", 990, 990, 990, 990, 990, ptr);
	ft_printf("my test strings: \n char is \"%c\" \n string is \"%s\" \n decimal is \"%d\" \n integer is \"%i\" \n unsigned decimal \"%u\" \n low hexa decimal \"%x\" \n up hexa decimal \"%X\" \n void pointer \"%p\" \n percent sign \"%%\"\n", 350, "abcdefg", 990, 990, 990, 990, 990, ptr);
}
