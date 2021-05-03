#include "includes/ft_printf.h"
#include <stdio.h>

int		main(void)
{
	int nbr = 456;
	ft_printf("%4.0d", nbr);
	printf("%4.0d", nbr);
	return (0);
}
