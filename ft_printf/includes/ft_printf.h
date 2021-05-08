/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 10:05:00 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/08 08:33:36 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct  s_info
{
    int     digit;
    int     precision;
    int     isplus;
    int     isint;
    int     isfloat;
    int     isnull;
    int     ishex;
    int     isbig;
	int		iszero;
}               t_info;

int		  ft_printf(const char *str, ...);
int		  ft_converts(const char *str, va_list argv, int cnt);

int       ft_bigswitch(t_info *info, char ch, va_list argv);
int		  ft_switchchar(char mk, va_list argv, t_info *info);
int		  ft_switchnbr(char mk, va_list argv, t_info *info);
int		  ft_switchhex(char mk, va_list argv, t_info *info);

void      ft_infoinit(t_info *info);
int       ft_mkinfo(const char *str, t_info *info);
int		  ft_isfloat(char *str, t_info *info);
int       ft_intinfo(const char *str, t_info *info);
int       ft_floatinfo(const char *str, t_info *info);

void	  ft_putchar(const char ch);
int		  ft_putnstr(const char *str);
char	  *ft_itoa(int nbr);
char	  *ft_uitoa(unsigned int nbr);
char	  *ft_itox(unsigned int nbr);
char	  *ft_itoX(unsigned int nbr);
char	  *ft_address(unsigned long nbr);
int		  ft_cntdigit(int	nbr);
int		  ft_cntudigit(unsigned int nbr);
int		  ft_cnthexdigit(unsigned int nbr);
int		  ft_cntulhexdigit(unsigned long nbr);
int       ft_isnum(char ch);
int       ft_strscpy(char *dest, const char *start, char *end);
float     ft_atof(char *nbr, int sign, t_info *info);
int       ft_atoi(char *nbr);
int       ft_isflag(const char *str);
int       ft_isspace(char ch);
int       ft_putchwiths(char ch, int digit);
int       ft_printsp(int nbr, char sp);
int       ft_putswithsp(char *str, t_info *info);
int       ft_strlen(char *str);
int       ft_putlstr(const char *str, int len);
void      ft_treatnull(char **str, t_info *info);
char      *ft_treatzero(t_info *info);
int       ft_putpercent(t_info *info);
int		  ft_putdwithsp(char *nbr, t_info *info);
int		  ft_putdfrontsp(char *nbr, t_info *info);
int		  ft_putdrearsp(char *nbr, t_info *info);
int		  ft_putfloatzeros(char *nbr, t_info *info);
int		  ft_putzeros(char *nbr, t_info *info);
int		  ft_putzesp(char *nbr, t_info *info);
int		  ft_putmizesp(char *nbr, t_info *info);
int		  ft_treatnzero(char *nbr, t_info *info);

#endif
