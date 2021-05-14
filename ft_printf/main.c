#include "includes/ft_printf.h"
#include <stdio.h>

int		main(void)
{
	int cnt;
	int cnt1;

	cnt = printf("%-4.%");
	cnt1 = ft_printf("%-4.%");
	printf("%d, %d", cnt, cnt1);
	return (0);
}
