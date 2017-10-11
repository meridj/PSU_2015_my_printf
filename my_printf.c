/*
** my_printf.c for my_printf in /home/lemeh/Rendu/lib/PSU_2015_my_printf
**
** Made by Lemeh
** Login   <lemeh@epitech.net>
**
** Started on  Tue Jan 26 12:23:01 2016 Lemeh
** Last update Tue Jan 26 12:33:20 2016 Lemeh
*/

#include <stdlib.h>
#include "my_printf.h"

ptr_func	*tab_func()
{
  ptr_func	*tab;

  tab = malloc(sizeof(char) * 12);
  tab[0] = &flag_d_i;
  tab[1] = &flag_d_i;
  tab[2] = &flag_s;
  tab[3] = &flag_c;
  tab[4] = &flag_p;
  tab[5] = &flag_x;
  tab[6] = &flag_b;
  tab[7] = &flag_u;
  tab[8] = &flag_o;
  tab[9] = &flag_X;
  tab[10] = &flag_S;
  tab[11] = &flag_modulo;
  return (tab);
}

int		check_flag(char c, va_list ap)
{

  int		j;
  char		*str2;
  ptr_func	*tab;

  j = 0;
  tab = tab_func();
  str2 = malloc(sizeof(char) * 13);
  if (str2 == NULL)
    {
      my_put_error("Malloc str2 fail");
      return (-2);
    }
  str2 = "discpxbuoXS% ";
  while (str2[j] != c && j < 12)
    j++;
  if (str2[j] != c)
    return (-1);
  else
    tab[j](ap);
  return (0);
}

int		my_printf(char *format, ...)
{
  int		i;
  va_list	ap;

  i = 0;
  va_start(ap, format);
  while (format[i] != '\0')
    {
      if (format[i] == '%')
	{
	  i++;
	  check_flag(format[i], ap);
	  i++;
	}
      else
	{
	  my_putchar(format[i]);
	  i++;
	}
    }
  va_end(ap);
  return (0);
}
