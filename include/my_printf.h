/*
** my_printf.h for my_printf in /home/lemeh/Rendu/lib/PSU_2015_my_printf/include
**
** Made by Lemeh
** Login   <lemeh@epitech.net>
**
** Started on  Tue Jan 26 12:06:39 2016 Lemeh
** Last update Tue Jan 26 12:44:03 2016 Lemeh
*/

#ifndef MY_PRINTF_H_
# define MY_PRINTF_H_

#include <stdarg.h>

typedef void (*ptr_func)(va_list ap);

int	my_printf(char *format, ...);

ptr_func        *tab_func();
int		my_strlen(char *str);
int		check_flag(char c, va_list ap);
void		my_put_error(char *str);
void		my_put_nbrunsigned(unsigned int nb);
void		my_putstr(char *str);
void		my_putchar(char c);
void		my_put_nbr(int nb);
void		my_put_nbr_binaire(int nb, char *base);
void		my_put_nbr_base(long nb, char *base);
void		my_put_nbr_hexa(unsigned int nb, char *base);
void		my_putstr_octal(char *str);
void		flag_d_i(va_list ap);
void		flag_c(va_list ap);
void		flag_s(va_list ap);
void		flag_p(va_list ap);
void		flag_b(va_list ap);
void		flag_x(va_list ap);
void		flag_X(va_list ap);
void		flag_u(va_list ap);
void		flag_o(va_list ap);
void		flag_S(va_list ap);
void		flag_modulo(va_list ap);

#endif /* MY_PRINTF_H_ */
