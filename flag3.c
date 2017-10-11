/*
** flag_3.c for flag_3.c in /home/meridj/Rendu/PSU_2015_my_printf/srcs
**
** Made by Lemeh
** Login   <meridj@epitech.net>
**
** Started on  Thu Nov 12 16:38:42 2015 Lemeh
** Last update Tue Jan 26 12:35:08 2016 Lemeh
*/

#include <stdarg.h>
#include "my_printf.h"

void	flag_S(va_list ap)
{
  my_putstr_octal(va_arg(ap, char *));
}

void	flag_modulo(va_list ap)
{
  (void)ap;
  my_putchar('%');
}
