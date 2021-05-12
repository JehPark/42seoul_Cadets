/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehpark <jehpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 10:05:00 by jehpark           #+#    #+#             */
/*   Updated: 2021/05/12 22:29:33 by jehpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_info
{
	int digit;
	int precision;
	int isplus;
	int isint;
	int isfloat;
	int ishex;
	int iszero;
	int isstar;
	int isnull;
	int	special;
	int isspace;
} t_info;

typedef struct s_star
{
	int sign;
	int dot;
	int n_star;
	int iszero;
	int innbr;
	int	isspace;
} t_star;

int ft_printf(const char *str, ...);
int ft_converts(const char *str, va_list argv, int cnt);

int ft_bigswitch(t_info *info, char ch, va_list argv);
int ft_switchchar(char mk, va_list argv, t_info *info);
int ft_switchnbr(char mk, va_list argv, t_info *info);
int ft_switchhex(char mk, va_list argv, t_info *info);
int ft_switchstar(char ch, va_list argv, t_info *info);
int	ft_switchoctal(char ch, va_list argv, t_info *info);

void ft_infoinit(t_info *info);
int ft_mkinfo(const char *str, t_info *info);
int ft_isfloat(char *str, t_info *info);
int ft_intinfo(const char *str, t_info *info);
int ft_floatinfo(const char *str, t_info *info);

int ft_starinfo(const char *str, t_info *info, va_list argv);
void ft_starinit(t_star *star);
int ft_setstar_i(const char *str, t_star *star);
void ft_setinfost(t_info *info, va_list argv, t_star *star);

int ft_putchar(const char ch);
int ft_putnstr(const char *str);
char *ft_itoa(int nbr);
char *ft_uitoa(unsigned int nbr);
char *ft_itox(unsigned int nbr);
char *ft_itox2(unsigned int nbr);
char *ft_address(unsigned long nbr, t_info *info);
char *ft_itooc(unsigned int nbr);
int ft_cntdigit(int nbr);
int ft_cntudigit(unsigned int nbr);
int ft_cnthexdigit(unsigned int nbr);
int ft_cntulhexdigit(unsigned long nbr);
int ft_isnum(char ch);
int ft_strscpy(char *dest, const char *start, char *end);
float ft_atof(char *nbr, int sign, t_info *info);
int ft_atoi(char *nbr);
int ft_isflag(const char *str);
int ft_isspace(char ch);
int ft_putchwiths(char ch, int digit);
int ft_printsp(int nbr, char sp);
int ft_putswithsp(char *str, t_info *info);
int ft_strlen(char *str);
int ft_putlstr(const char *str, int len);
void ft_treatnull(char **str, t_info *info);
char *ft_treatzero(t_info *info);
int ft_putpercent(t_info *info);
int ft_putdwithsp(char *nbr, t_info *info);
int	ft_putdwithsp2(char *nbr, t_info *info);
int ft_putdfrontsp(char *nbr, t_info *info);
int ft_putdrearsp(char *nbr, t_info *info);
int ft_putfloatzeros(char *nbr, t_info *info);
int ft_putzeros(char *nbr, t_info *info);
int ft_putzesp(char *nbr, t_info *info);
int ft_putmizesp(char *nbr, t_info *info);
int ft_treatnzero(char *nbr, t_info *info);
int ft_isstar(const char *str);
int ft_putswithstar(char *str, t_info *info);
int ft_putstarstr(const char *str, int len);

#endif
