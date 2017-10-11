/*
** flag_.c for flag_.c in /home/meridj/Rendu/PSU_2015_my_printf/srcs
**
** Made by Lemeh
** Login   <meridj@epitech.net>
**
** Started on  Mon Nov  9 23:03:51 2015 Lemeh
** Last update Tue Jan 26 12:34:03 2016 Lemeh
*/

#include <stdarg.h>
#include "my_printf.h"

void	flag_p(va_list ap)
{
  my_putstr("0x");
  my_put_nbr_hexa(va_arg(ap, unsigned int), "0123456789abcdef");
}

void	flag_b(va_list ap)
{
  my_put_nbr_binaire(va_arg(ap, unsigned int), "01");
}

void	flag_x(va_list ap)
{
  my_put_nbr_base(va_arg(ap, int), "0123456789abcdef");
}

void	flag_u(va_list ap)
{
  my_put_nbrunsigned(va_arg(ap, unsigned int));
}
