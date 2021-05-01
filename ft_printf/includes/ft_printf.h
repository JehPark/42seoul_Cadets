/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 10:05:00 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/01 14:17:21 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_converts(const char *str, va_list argv, int cnt);

int		ft_switchchar(char mk, va_list argv, int cnt);
int		ft_switchnbr(char mk, va_list argv, int cnt);
int		ft_switchhex(char mk, va_list argv, int cnt);

void	ft_putchar(const char ch);
int		ft_putnstr(const char *str);
char	*ft_itoa(int nbr);
char	*ft_uitoa(unsigned int nbr);
char	*ft_itox(unsigned int nbr);
char	*ft_itoX(unsigned int nbr);
char	*ft_address(unsigned int nbr);

#endif
