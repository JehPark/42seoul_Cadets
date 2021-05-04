#include "includes/ft_printf.h"
#include <stdio.h>

int		main(void)
{
	char ch = '!';
	ft_printf("%-3c\n", ch);
	printf("%-3c", ch);
	return (0);
}
