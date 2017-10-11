/*
** aff_all.c for aff_all.c in /home/meridj/Rendu/PSU_2015_my_printf/srcs
**
** Made by Lemeh
** Login   <meridj@epitech.net>
**
** Started on  Mon Nov  9 22:57:57 2015 Lemeh
** Last update Tue Jan 26 12:33:36 2016 Lemeh
*/

#include "my_printf.h"
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void	my_put_error(char *str)
{
  write(2, str, my_strlen(str));
}

void	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar ('-');
      nb = nb * -1;
    }
  if (nb > 9)
    my_put_nbr(nb / 10);
  my_putchar((nb % 10) + 48);
}

void    my_put_nbr_binaire(int nb, char *base)
{
  int   j;
  int   div;
  int   size;

  size = my_strlen(base);
  if (nb < 0)
    nb = -nb;
  div = 1;
  while ((nb / div) >= size)
    div = div * size;
  while (div > 0)
    {
      j = (nb / div) % size;
      my_putchar(base[j]);
      div = div / size;
    }
}
